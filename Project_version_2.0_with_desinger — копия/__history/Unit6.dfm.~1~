object Form6: TForm6
  Left = 0
  Top = 0
  Caption = 'Form6'
  ClientHeight = 412
  ClientWidth = 1054
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
    Left = 0
    Top = 0
    Width = 433
    Height = 409
    DataSource = DataSource1
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
        Expanded = False
        FieldName = 'subjects'
        Visible = True
      end>
  end
  object CheckListBox1: TCheckListBox
    Left = 439
    Top = 0
    Width = 64
    Height = 409
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
  object Edit1: TEdit
    Left = 576
    Top = 104
    Width = 121
    Height = 24
    TabOrder = 2
    Text = 'Edit1'
  end
  object AddButton: TButton
    Left = 632
    Top = 200
    Width = 75
    Height = 25
    Caption = 'AddButton'
    TabOrder = 3
    OnClick = AddButtonClick
  end
  object DeleteButton: TButton
    Left = 728
    Top = 200
    Width = 75
    Height = 25
    Caption = 'DeleteButton'
    TabOrder = 4
    OnClick = DeleteButtonClick
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = Form1.ADOConnection2
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'use Practic_work'
      'select * from Subjects order by subjects')
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Top = 24
  end
end
