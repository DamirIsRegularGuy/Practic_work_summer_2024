object Form1: TForm1
  Left = 0
  Top = 0
  Anchors = [akLeft, akTop, akRight]
  Caption = 'Form1'
  ClientHeight = 798
  ClientWidth = 1373
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnResize = FormResize
  DesignSize = (
    1373
    798)
  PixelsPerInch = 120
  TextHeight = 16
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 1377
    Height = 801
    ActivePage = TabSheet3
    Anchors = [akLeft, akTop, akRight, akBottom]
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = #1057#1087#1072#1088#1074#1086#1095#1085#1080#1082#1080
      ExplicitWidth = 1017
      ExplicitHeight = 604
    end
    object TabSheet2: TTabSheet
      Caption = #1059#1095#1077#1073#1085#1081#1099' '#1087#1083#1072#1085
      ImageIndex = 1
      ExplicitLeft = 8
      ExplicitTop = 19
      DesignSize = (
        1369
        770)
      object DBGrid1: TDBGrid
        Left = 3
        Top = 164
        Width = 1363
        Height = 603
        Anchors = [akLeft, akTop, akRight, akBottom]
        DataSource = DataSource1
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -17
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -13
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
        Columns = <
          item
            Expanded = False
            FieldName = 'subjects'
            Title.Alignment = taCenter
            Title.Caption = #1044#1080#1089#1094#1080#1087#1083#1080#1085#1072
            Title.Font.Charset = DEFAULT_CHARSET
            Title.Font.Color = clWindowText
            Title.Font.Height = -13
            Title.Font.Name = 'Tahoma'
            Title.Font.Style = [fsUnderline]
            Width = 350
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Name_1'
            Width = 200
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Cours'
            Title.Alignment = taCenter
            Title.Caption = #1050#1091#1088#1089
            Title.Font.Charset = DEFAULT_CHARSET
            Title.Font.Color = clWindowText
            Title.Font.Height = -13
            Title.Font.Name = 'Tahoma'
            Title.Font.Style = [fsBold, fsUnderline]
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Semestr'
            Title.Caption = #1057#1077#1084#1077#1089#1090#1088
            Title.Font.Charset = DEFAULT_CHARSET
            Title.Font.Color = clWindowText
            Title.Font.Height = -13
            Title.Font.Name = 'Tahoma'
            Title.Font.Style = []
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'In_Audience'
            Title.Alignment = taCenter
            Title.Caption = #1050#1086#1083'-'#1074#1086' '#1095#1072#1089#1086#1074' '#1074' '#1072#1091#1076#1080#1090#1086#1088#1080#1080
            Title.Font.Charset = DEFAULT_CHARSET
            Title.Font.Color = clWindowText
            Title.Font.Height = -13
            Title.Font.Name = 'Tahoma'
            Title.Font.Style = [fsItalic, fsUnderline]
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Lecture_Hours'
            Title.Alignment = taCenter
            Title.Caption = #1051#1077#1082#1094#1080#1080
            Title.Font.Charset = DEFAULT_CHARSET
            Title.Font.Color = clWindowText
            Title.Font.Height = -13
            Title.Font.Name = 'Tahoma'
            Title.Font.Style = [fsItalic, fsUnderline]
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Practice_Hours'
            Title.Caption = #1055#1088#1072#1082#1090#1080#1082#1080
            Title.Font.Charset = DEFAULT_CHARSET
            Title.Font.Color = clWindowText
            Title.Font.Height = -13
            Title.Font.Name = 'Tahoma'
            Title.Font.Style = [fsItalic, fsUnderline]
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Lab_Hours'
            Title.Caption = #1051#1072#1073#1086#1088#1072#1090#1086#1088#1085#1099#1077' '#1095#1072#1089#1099
            Title.Font.Charset = DEFAULT_CHARSET
            Title.Font.Color = clWindowText
            Title.Font.Height = -13
            Title.Font.Name = 'Tahoma'
            Title.Font.Style = [fsItalic, fsUnderline]
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Semenars'
            Title.Alignment = taCenter
            Title.Caption = #1057#1077#1084#1077#1085#1072#1088#1099
            Title.Font.Charset = DEFAULT_CHARSET
            Title.Font.Color = clWindowText
            Title.Font.Height = -13
            Title.Font.Name = 'Tahoma'
            Title.Font.Style = [fsItalic, fsUnderline]
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Independent_Hours'
            Title.Alignment = taCenter
            Title.Caption = #1063#1072#1089#1099' '#1089#1072#1084#1086#1089#1090#1086#1103#1090#1077#1083#1100#1085#1086#1081' '#1088#1072#1073#1086#1090#1099
            Title.Font.Charset = DEFAULT_CHARSET
            Title.Font.Color = clWindowText
            Title.Font.Height = -13
            Title.Font.Name = 'Tahoma'
            Title.Font.Style = [fsItalic, fsUnderline]
            Visible = True
          end
          item
            Alignment = taCenter
            Expanded = False
            FieldName = 'Name'
            Title.Alignment = taCenter
            Title.Caption = #1060#1086#1088#1084#1072' '#1082#1086#1085#1090#1088#1086#1083#1103
            Title.Font.Charset = DEFAULT_CHARSET
            Title.Font.Color = clWindowText
            Title.Font.Height = -13
            Title.Font.Name = 'Tahoma'
            Title.Font.Style = [fsBold, fsUnderline]
            Visible = True
          end>
      end
      object Panel1: TPanel
        Left = 3
        Top = 3
        Width = 1363
        Height = 155
        Anchors = [akLeft, akTop, akRight]
        BevelKind = bkFlat
        BevelOuter = bvNone
        Ctl3D = True
        Locked = True
        ParentCtl3D = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 1
        OnResize = Panel1Resize
        DesignSize = (
          1359
          151)
        object audit: TEdit
          Left = 392
          Top = 10
          Width = 265
          Height = 29
          Anchors = [akLeft, akTop, akRight]
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 0
          Text = #1040#1091#1076#1080#1090#1086#1088#1085#1099#1077' '#1095#1072#1089#1099
        end
        object lec: TEdit
          Left = 392
          Top = 54
          Width = 265
          Height = 29
          Anchors = [akLeft, akTop, akRight]
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 1
          Text = #1051#1077#1082#1094#1080#1080
        end
        object prac: TEdit
          Left = 392
          Top = 99
          Width = 265
          Height = 29
          Anchors = [akLeft, akTop, akRight]
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 2
          Text = #1055#1088#1072#1082#1090#1080#1082#1080
        end
        object lab: TEdit
          Left = 663
          Top = 10
          Width = 324
          Height = 29
          Anchors = [akLeft, akTop, akRight]
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 3
          Text = #1051#1072#1073#1086#1088#1072#1090#1086#1088#1085#1099#1077
        end
        object semenar: TEdit
          Left = 663
          Top = 56
          Width = 324
          Height = 29
          Anchors = [akLeft, akTop, akRight]
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 4
          Text = #1057#1077#1084#1077#1085#1072#1088#1099
        end
        object sam: TEdit
          Left = 663
          Top = 99
          Width = 324
          Height = 29
          Anchors = [akLeft, akTop, akRight]
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 5
          Text = #1057#1072#1084#1086#1089#1090#1086#1103#1090#1077#1083#1100#1085#1099#1077
        end
        object add: TButton
          Left = 993
          Top = 5
          Width = 185
          Height = 63
          Anchors = [akTop, akRight]
          Caption = #1044#1086#1073#1072#1074#1080#1090#1100
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 6
          OnClick = addClick
        end
        object update: TButton
          Left = 1184
          Top = 5
          Width = 169
          Height = 63
          Anchors = [akTop, akRight]
          Caption = #1048#1079#1084#1077#1085#1080#1090#1100
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 7
          OnClick = updateClick
        end
        object delet: TButton
          Left = 993
          Top = 74
          Width = 185
          Height = 63
          Anchors = [akTop, akRight]
          Caption = #1059#1076#1072#1083#1080#1090#1100
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 8
          OnClick = deletClick
        end
        object Dissipl: TComboBox
          Left = 3
          Top = 56
          Width = 366
          Height = 29
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 9
          Text = #1055#1088#1077#1076#1084#1077#1090
          OnChange = DissiplChange
          OnDropDown = DissiplDropDown
        end
        object Semestr: TComboBox
          Left = 3
          Top = 99
          Width = 126
          Height = 29
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 10
          Text = #1057#1077#1084#1077#1089#1090#1088' '
          OnChange = SemestrChange
          Items.Strings = (
            '1'
            '2'
            '3'
            '4'
            '5'
            '6'
            '7'
            '8')
        end
        object Napr_search: TComboBox
          Left = 3
          Top = 21
          Width = 366
          Height = 29
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 11
          Text = #1053#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077
          OnChange = Napr_searchChange
          OnDropDown = Napr_searchDropDown
        end
        object contr: TComboBox
          Left = 135
          Top = 99
          Width = 234
          Height = 29
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 12
          Text = #1060#1086#1088#1084#1072' '#1082#1086#1085#1090#1088#1086#1083#1103
          Items.Strings = (
            #1047#1072#1095#1077#1090
            #1069#1082#1079#1072#1084#1077#1085
            #1047#1072#1095#1077#1090' '#1080' '#1069#1082#1079#1072#1084#1077#1085)
        end
        object prepodWindow: TButton
          Left = 1184
          Top = 74
          Width = 169
          Height = 63
          Caption = #1056#1072#1089#1087#1088#1077#1076#1077#1083#1077#1085#1080#1077' '#1084#1077#1078#1076#1091' '#1087#1088#1077#1087#1086#1076#1072#1074#1072#1090#1077#1083#1103#1084#1080
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -17
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
          TabOrder = 13
          WordWrap = True
          OnClick = prepodWindowClick
        end
      end
    end
    object TabSheet3: TTabSheet
      Caption = #1057#1086#1089#1090#1072#1074#1083#1077#1085#1080#1077' '#1088#1072#1089#1087#1080#1089#1072#1085#1080#1103
      ImageIndex = 2
      ExplicitWidth = 1017
      ExplicitHeight = 604
    end
    object TabSheet4: TTabSheet
      Caption = #1055#1086#1082#1072#1079' '#1088#1072#1089#1087#1080#1089#1072#1085#1080#1103
      ImageIndex = 3
      ExplicitLeft = 0
      ExplicitTop = 31
      DesignSize = (
        1369
        770)
      object SpeedButton6: TSpeedButton
        Left = 147
        Top = 8
        Width = 150
        Height = 53
        Anchors = [akTop, akRight]
      end
      object SpeedButton7: TSpeedButton
        Left = 303
        Top = 8
        Width = 146
        Height = 53
        Anchors = [akTop, akRight]
      end
      object SpeedButton8: TSpeedButton
        Left = 455
        Top = 8
        Width = 146
        Height = 53
        Anchors = [akTop, akRight]
      end
      object SpeedButton9: TSpeedButton
        Left = 607
        Top = 8
        Width = 146
        Height = 53
        Anchors = [akTop, akRight]
      end
      object SpeedButton10: TSpeedButton
        Left = 759
        Top = 8
        Width = 146
        Height = 53
        Anchors = [akTop, akRight]
      end
      object SpeedButton11: TSpeedButton
        Left = 911
        Top = 8
        Width = 138
        Height = 53
        Anchors = [akTop, akRight]
      end
      object SpeedButton12: TSpeedButton
        Left = 1055
        Top = 8
        Width = 148
        Height = 53
        Anchors = [akTop, akRight]
      end
      object SpeedButton1: TSpeedButton
        Left = 11
        Top = 67
        Width = 130
        Height = 78
        Caption = '1 '#1087#1072#1088#1072' \n '
        ParentShowHint = False
        ShowHint = False
      end
      object SpeedButton2: TSpeedButton
        Left = 11
        Top = 147
        Width = 130
        Height = 78
        Caption = '1 '#1087#1072#1088#1072' \n '
      end
      object SpeedButton3: TSpeedButton
        Left = 11
        Top = 231
        Width = 130
        Height = 78
        Caption = '1 '#1087#1072#1088#1072' \n '
      end
      object SpeedButton4: TSpeedButton
        Left = 11
        Top = 315
        Width = 130
        Height = 78
        Caption = '1 '#1087#1072#1088#1072' \n '
      end
      object SpeedButton5: TSpeedButton
        Left = 11
        Top = 399
        Width = 130
        Height = 78
        Caption = '1 '#1087#1072#1088#1072' \n '
      end
      object StringGrid3: TStringGrid
        Left = 147
        Top = 67
        Width = 1206
        Height = 410
        Anchors = [akLeft, akTop, akRight]
        ColCount = 7
        DefaultColWidth = 150
        DefaultRowHeight = 80
        FixedCols = 0
        FixedRows = 0
        TabOrder = 0
      end
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
    Left = 4
    Top = 27
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT *'
      'FROM Dist'
      
        'JOIN Form_Of_Control ON Dist.Form_Of_Control = Form_Of_Control.i' +
        'd'
      'JOIN Speciality ON Dist.Speciality_Id = Speciality.id'
      'JOIN Subjects ON Dist.Name_Dist = Subjects.id')
    Left = 540
    Top = 65531
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 4
    Top = 115
  end
  object Napr: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 568
    Top = 65528
  end
end
