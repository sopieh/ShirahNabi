object Form7: TForm7
  Left = 0
  Top = 0
  Caption = 'Update Application'
  ClientHeight = 180
  ClientWidth = 447
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = -2
    Top = -1
    Width = 449
    Height = 65
    BevelOuter = bvNone
    Color = clWindowText
    ParentBackground = False
    TabOrder = 0
  end
  object Panel2: TPanel
    Left = -2
    Top = 120
    Width = 449
    Height = 65
    BevelOuter = bvNone
    Color = clWindowText
    ParentBackground = False
    TabOrder = 1
  end
  object Button1: TButton
    Left = 298
    Top = 70
    Width = 139
    Height = 38
    Caption = 'Download'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 13
    Top = 70
    Width = 142
    Height = 38
    Caption = 'Cek Version'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = Button2Click
  end
  object IdHTTP1: TIdHTTP
    AllowCookies = True
    ProxyParams.BasicAuthentication = False
    ProxyParams.ProxyPort = 0
    Request.ContentLength = -1
    Request.ContentRangeEnd = -1
    Request.ContentRangeStart = -1
    Request.ContentRangeInstanceLength = -1
    Request.Accept = 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8'
    Request.BasicAuthentication = False
    Request.UserAgent = 'Mozilla/3.0 (compatible; Indy Library)'
    Request.Ranges.Units = 'bytes'
    Request.Ranges = <>
    HTTPOptions = [hoForceEncodeParams]
    Left = 376
    Top = 128
  end
end
