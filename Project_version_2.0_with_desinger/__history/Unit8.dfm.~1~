object Form8: TForm8
  Left = 0
  Top = 0
  Caption = 'Form8'
  ClientHeight = 519
  ClientWidth = 1024
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
    Width = 305
    Height = 505
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
        FieldName = 'room'
        Width = 65
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'tipe'
        Visible = True
      end>
  end
  object EditRoom: TEdit
    Left = 376
    Top = 144
    Width = 121
    Height = 24
    TabOrder = 1
    Text = 'EditRoom'
  end
  object EditTipe: TEdit
    Left = 376
    Top = 192
    Width = 121
    Height = 24
    TabOrder = 2
    Text = 'EditTipe'
  end
  object Button1: TButton
    Left = 608
    Top = 128
    Width = 153
    Height = 34
    Caption = 'Button1'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 608
    Top = 168
    Width = 153
    Height = 33
    Caption = 'Button2'
    TabOrder = 4
    OnClick = Button2Click
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = Form1.ADOConnection2
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'use Practic_work'
      'select * from Kabin order by room')
    Left = 320
    Top = 8
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 344
    Top = 8
  end
end
