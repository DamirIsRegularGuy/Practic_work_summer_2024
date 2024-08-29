object Form7: TForm7
  Left = 0
  Top = 0
  Caption = 'Form7'
  ClientHeight = 559
  ClientWidth = 1379
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object DBGrid1: TDBGrid
    Left = 8
    Top = 8
    Width = 433
    Height = 543
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -13
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnCellClick = DBGrid1CellClick
    Columns = <
      item
        Expanded = False
        FieldName = 'Name'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'spec'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'cours'
        Visible = True
      end>
  end
  object DBGrid2: TDBGrid
    Left = 447
    Top = 8
    Width = 402
    Height = 543
    DataSource = DataSource2
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -13
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnCellClick = DBGrid2CellClick
    Columns = <
      item
        Expanded = False
        FieldName = 'First_name'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Name'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Last_name'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Cours'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Adres'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Telephone'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Email'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Birthday'
        Visible = True
      end>
  end
  object Edit2: TEdit
    Left = 999
    Top = 32
    Width = 138
    Height = 24
    TabOrder = 2
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 1143
    Top = 32
    Width = 138
    Height = 24
    TabOrder = 3
    Text = 'Edit3'
  end
  object Button1: TButton
    Left = 960
    Top = 88
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 1062
    Top = 88
    Width = 75
    Height = 25
    Caption = 'Button2'
    TabOrder = 5
    OnClick = Button2Click
  end
  object Edit1: TComboBox
    Left = 848
    Top = 32
    Width = 145
    Height = 24
    TabOrder = 6
    Text = 'Edit1'
    OnDropDown = Edit1DropDown
  end
  object Panel1: TPanel
    Left = 855
    Top = 200
    Width = 522
    Height = 351
    TabOrder = 7
    object Label1: TLabel
      Left = 8
      Top = 160
      Width = 220
      Height = 16
      Caption = #1057#1085#1072#1095#1072#1083#1072' '#1074#1074#1086#1076#1080#1090#1100' '#1084#1077#1089#1103#1094', '#1087#1086#1090#1086#1084' '#1076#1077#1085#1100' '
    end
    object Edit4: TEdit
      Left = 8
      Top = 16
      Width = 145
      Height = 24
      TabOrder = 0
      Text = 'Edit4'
    end
    object Edit5: TEdit
      Left = 8
      Top = 56
      Width = 145
      Height = 24
      TabOrder = 1
      Text = 'Edit5'
    end
    object Edit6: TEdit
      Left = 8
      Top = 104
      Width = 145
      Height = 24
      TabOrder = 2
      Text = 'Edit6'
    end
    object Edit7: TEdit
      Left = 256
      Top = 16
      Width = 241
      Height = 24
      TabOrder = 3
      Text = 'Edit7'
    end
    object Edit8: TEdit
      Left = 256
      Top = 56
      Width = 241
      Height = 24
      TabOrder = 4
      Text = 'Edit8'
    end
    object Edit9: TEdit
      Left = 256
      Top = 104
      Width = 241
      Height = 24
      TabOrder = 5
      Text = 'Edit9'
    end
    object Edit10: TEdit
      Left = 234
      Top = 152
      Width = 145
      Height = 24
      TabOrder = 6
      Text = 'Edit10'
    end
    object Button3: TButton
      Left = 16
      Top = 216
      Width = 177
      Height = 57
      Caption = 'Button3'
      TabOrder = 7
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 320
      Top = 216
      Width = 177
      Height = 57
      Caption = 'Button4'
      TabOrder = 8
      OnClick = Button4Click
    end
  end
  object ADOQueryGroupe: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'use Practic_work'
      'select * from Groupe')
    Left = 8
    Top = 8
  end
  object ADOQueryStudents: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM Students')
    Left = 48
    Top = 8
  end
  object DataSource1: TDataSource
    DataSet = ADOQueryGroupe
    Left = 8
    Top = 48
  end
  object DataSource2: TDataSource
    DataSet = ADOQueryStudents
    Left = 48
    Top = 48
  end
  object ADOQuerySpeciality: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 88
    Top = 8
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=Practic_work;Data Source=LENOVO\DAMSERV' +
      'ER'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 40
    Top = 128
  end
end
