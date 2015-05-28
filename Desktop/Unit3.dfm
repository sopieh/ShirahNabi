object DM: TDM
  OldCreateOrder = False
  Height = 347
  Width = 471
  object koneksi: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;User ID=ariefset_' +
      'sn_rpl;Data Source=ariefset_sn_rpl;Initial Catalog=ariefset_sn_r' +
      'pl'
    IsolationLevel = ilIsolated
    Left = 136
    Top = 120
  end
  object kisah: TADOQuery
    Active = True
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    Prepared = True
    SQL.Strings = (
      'select *from kisah;')
    Left = 224
    Top = 88
  end
  object Dkisah: TDataSource
    DataSet = kisah
    Left = 224
    Top = 152
  end
  object sahabat: TADOQuery
    Active = True
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from sahabat;')
    Left = 304
    Top = 96
  end
  object Dsahabat: TDataSource
    DataSet = sahabat
    Left = 296
    Top = 168
  end
end
