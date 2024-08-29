object Form9: TForm9
  Left = 0
  Top = 0
  Caption = 'Form9'
  ClientHeight = 465
  ClientWidth = 795
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object Memo1: TMemo
    Left = 8
    Top = 8
    Width = 705
    Height = 449
    TabOrder = 0
  end
  object Button1: TButton
    Left = 719
    Top = 264
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 1
  end
  object Button2: TButton
    Left = 719
    Top = 295
    Width = 75
    Height = 25
    Caption = 'Button2'
    TabOrder = 2
    OnClick = Button2Click
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'use Practic_work'
      'select * from Students')
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=Practic_work;Data Source=LENOVO\DAMSERV' +
      'ER'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Top = 32
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Top = 64
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Top = 104
  end
end
