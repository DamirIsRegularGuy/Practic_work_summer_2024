object Form5: TForm5
  Left = 0
  Top = 0
  Caption = 'Form5'
  ClientHeight = 778
  ClientWidth = 1018
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    1018
    778)
  PixelsPerInch = 120
  TextHeight = 16
  object DBGrid1: TDBGrid
    Left = 75
    Top = 8
    Width = 935
    Height = 542
    Anchors = [akTop, akRight]
    DataSource = DataSource1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -13
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnCellClick = DBGrid1CellClick
    OnDrawColumnCell = DBGrid1DrawColumnCell
    Columns = <
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'First_name'
        Title.Alignment = taCenter
        Title.Caption = #1060#1072#1084#1080#1083#1080#1103
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold, fsUnderline]
        Width = 150
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Name'
        Title.Alignment = taCenter
        Title.Caption = #1048#1084#1103
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold, fsUnderline]
        Width = 100
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Last_name'
        Title.Alignment = taCenter
        Title.Caption = #1054#1090#1095#1077#1089#1090#1074#1086
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold, fsUnderline]
        Width = 150
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Position'
        Title.Alignment = taCenter
        Title.Caption = #1044#1086#1083#1078#1085#1086#1089#1090#1100
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold, fsUnderline]
        Width = 200
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Name_1'
        Title.Alignment = taCenter
        Title.Caption = #1050#1072#1092#1077#1076#1088#1072
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold, fsUnderline]
        Width = 270
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Faculty'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Adress'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Phone'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Email'
        Visible = True
      end>
  end
  object CheckListBox1: TCheckListBox
    Left = 8
    Top = 8
    Width = 64
    Height = 542
    Items.Strings = (
      #1040
      #1041
      #1042
      #1043
      #1044
      #1045
      #1025
      #1046
      #1047
      #1048
      #1049
      #1050
      #1051
      #1052
      #1053
      #1054
      #1055
      #1056
      #1057
      #1058
      #1059
      #1060
      #1061
      #1062
      #1063
      #1064
      #1065
      #1066
      #1067
      #1068
      #1069
      #1070
      #1071)
    TabOrder = 1
    OnClick = CheckListBox1Click
  end
  object Panel1: TPanel
    Left = 8
    Top = 556
    Width = 1002
    Height = 214
    TabOrder = 2
    object Edit1: TEdit
      Left = 8
      Top = 16
      Width = 161
      Height = 24
      TabOrder = 0
      Text = 'Edit1'
    end
    object Edit2: TEdit
      Left = 8
      Top = 46
      Width = 161
      Height = 24
      TabOrder = 1
      Text = 'Edit2'
    end
    object Edit3: TEdit
      Left = 8
      Top = 76
      Width = 161
      Height = 24
      TabOrder = 2
      Text = 'Edit3'
    end
    object Edit4: TEdit
      Left = 8
      Top = 106
      Width = 161
      Height = 24
      TabOrder = 3
      Text = 'Edit4'
    end
    object Edit5: TEdit
      Left = 8
      Top = 136
      Width = 161
      Height = 24
      TabOrder = 4
      Text = 'Edit5'
    end
    object Edit6: TEdit
      Left = 200
      Top = 16
      Width = 153
      Height = 24
      TabOrder = 5
      Text = 'Edit6'
    end
    object Edit7: TEdit
      Left = 200
      Top = 46
      Width = 153
      Height = 24
      TabOrder = 6
      Text = 'Edit7'
    end
    object Edit8: TEdit
      Left = 200
      Top = 76
      Width = 153
      Height = 24
      TabOrder = 7
      Text = 'Edit8'
    end
    object Edit9: TEdit
      Left = 200
      Top = 106
      Width = 153
      Height = 24
      TabOrder = 8
      Text = 'Edit9'
    end
    object Button1: TButton
      Left = 368
      Top = 80
      Width = 169
      Height = 57
      Caption = 'Button1'
      TabOrder = 9
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 568
      Top = 80
      Width = 169
      Height = 57
      Caption = 'Button2'
      TabOrder = 10
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 768
      Top = 80
      Width = 169
      Height = 57
      Caption = 'Button3'
      TabOrder = 11
      OnClick = Button3Click
    end
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=Practic_work;Data Source=LENOVO\DAMSERV' +
      'ER'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 8
    Top = 16
  end
  object ADOQueryPrepods: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from Prepods'
      'JOIN Kaphedra ON Prepods.Kaphedra = Kaphedra.id'
      'order by First_name')
    Left = 8
    Top = 48
  end
  object DataSource1: TDataSource
    DataSet = ADOQueryPrepods
    Left = 8
    Top = 80
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'use Practic_work'
      'select Rasp.*, Kabin.*, Prepods.*, Subjects.*, Groupe.* '
      'from Rasp'
      'inner join Kabin on Rasp.id_kabin = Kabin.id'
      'inner join Subjects on Rasp.id_pred = Subjects.id '
      'inner join Prepods on Rasp.id_prep = Prepods.id '
      'inner join Groupe on Rasp.id_gr = Groupe.id '
      'inner join Speciality on Speciality.id = Groupe.spec; ')
    Left = 48
    Top = 16
  end
  object DataSource2: TDataSource
    DataSet = ADOQuery1
    Left = 48
    Top = 56
  end
end
