object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 688
  ClientWidth = 1233
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnResize = FormResize
  DesignSize = (
    1233
    688)
  PixelsPerInch = 120
  TextHeight = 16
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 1231
    Height = 689
    ActivePage = TabSheet1
    Anchors = [akLeft, akTop, akRight]
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = #1057#1087#1072#1088#1074#1086#1095#1085#1080#1082#1080
      ExplicitWidth = 1383
      ExplicitHeight = 722
      DesignSize = (
        1223
        658)
      object PageControl5: TPageControl
        Left = 1
        Top = -42
        Width = 1222
        Height = 700
        ActivePage = TabSheet6
        Anchors = [akLeft, akTop, akRight, akBottom]
        TabOrder = 0
        object TabSheet6: TTabSheet
          Caption = #1057#1087#1088#1072#1074#1086#1095#1085#1080#1082
          object Button1: TButton
            Left = 112
            Top = 25
            Width = 121
            Height = 33
            Caption = #1055#1088#1077#1087#1086#1076#1072#1074#1072#1090#1077#1083#1080
            TabOrder = 0
            OnClick = Button1Click
          end
          object Button2: TButton
            Left = 112
            Top = 64
            Width = 121
            Height = 33
            Caption = #1055#1088#1077#1076#1084#1077#1090#1099
            TabOrder = 1
            OnClick = Button2Click
          end
          object Button3: TButton
            Left = 112
            Top = 103
            Width = 121
            Height = 33
            Caption = #1043#1088#1091#1087#1087#1099
            TabOrder = 2
            OnClick = Button3Click
          end
          object Button23: TButton
            Left = 112
            Top = 142
            Width = 121
            Height = 33
            Caption = #1050#1072#1073#1080#1085#1077#1090#1099
            TabOrder = 3
            OnClick = Button23Click
          end
          object Button40: TButton
            Left = 112
            Top = 181
            Width = 121
            Height = 33
            Caption = #1044#1088#1077#1096#1085#1080#1082#1080
            TabOrder = 4
            OnClick = Button40Click
          end
          object Button41: TButton
            Left = 112
            Top = 220
            Width = 121
            Height = 33
            Caption = #1059#1074#1077#1076#1086#1084#1083#1077#1085#1080#1103
            TabOrder = 5
            OnClick = Button41Click
          end
        end
        object TabSheet7: TTabSheet
          Caption = #1046#1091#1088#1085#1072#1083
          ImageIndex = 1
          ExplicitLeft = 0
          ExplicitTop = 0
          ExplicitWidth = 0
          ExplicitHeight = 0
          DesignSize = (
            1214
            669)
          object Label6: TLabel
            Left = 16
            Top = 10
            Width = 96
            Height = 16
            Caption = #1055#1088#1077#1087#1086#1076#1072#1074#1072#1090#1077#1083#1100':'
          end
          object Label7: TLabel
            Left = 263
            Top = 10
            Width = 55
            Height = 16
            Caption = #1055#1088#1077#1076#1084#1077#1090':'
          end
          object Label8: TLabel
            Left = 503
            Top = 10
            Width = 46
            Height = 16
            Caption = #1043#1088#1091#1087#1087#1072':'
          end
          object Label9: TLabel
            Left = 816
            Top = 10
            Width = 54
            Height = 16
            Caption = #1057#1077#1084#1077#1089#1090#1088':'
          end
          object Label27: TLabel
            Left = 663
            Top = 10
            Width = 26
            Height = 16
            Caption = #1050#1091#1088#1089
          end
          object Lookup2: TComboBox
            Left = 263
            Top = 32
            Width = 234
            Height = 24
            TabOrder = 0
          end
          object Lookup1: TComboBox
            Left = 16
            Top = 32
            Width = 241
            Height = 24
            TabOrder = 1
          end
          object Lookup3: TComboBox
            Left = 503
            Top = 32
            Width = 154
            Height = 24
            TabOrder = 2
          end
          object Lookup4: TComboBox
            Left = 816
            Top = 32
            Width = 113
            Height = 24
            TabOrder = 3
          end
          object Button4: TButton
            Left = 964
            Top = 7
            Width = 223
            Height = 25
            Caption = #1054#1090#1082#1088#1099#1090#1100' '#1046#1091#1088#1085#1072#1083
            TabOrder = 4
          end
          object Panel3: TPanel
            Left = 976
            Top = 69
            Width = 223
            Height = 597
            Anchors = [akTop, akRight, akBottom]
            TabOrder = 5
            DesignSize = (
              223
              597)
            object Label3: TLabel
              Left = 8
              Top = 50
              Width = 52
              Height = 16
              Caption = #1057#1090#1091#1076#1077#1085#1090':'
            end
            object Label4: TLabel
              Left = 8
              Top = 154
              Width = 61
              Height = 16
              Caption = #1047#1085#1072#1095#1077#1085#1080#1077':'
            end
            object Label5: TLabel
              Left = 8
              Top = 206
              Width = 34
              Height = 16
              Caption = #1044#1072#1090#1072':'
            end
            object Label10: TLabel
              Left = 8
              Top = 102
              Width = 34
              Height = 16
              Caption = #1055#1072#1088#1072':'
            end
            object Label13: TLabel
              Left = 8
              Top = 258
              Width = 50
              Height = 16
              Caption = #1055#1088#1077#1076#1084#1077#1090
              Visible = False
            end
            object DateTimePicker1: TDateTimePicker
              Left = 5
              Top = 8
              Width = 212
              Height = 24
              Date = 45258.978373599540000000
              Time = 45258.978373599540000000
              DoubleBuffered = False
              ParentDoubleBuffered = False
              ParentShowHint = False
              ShowHint = False
              TabOrder = 0
            end
            object Edit2: TEdit
              Left = 8
              Top = 72
              Width = 209
              Height = 24
              BorderStyle = bsNone
              TabOrder = 1
            end
            object Edit3: TEdit
              Left = 8
              Top = 124
              Width = 209
              Height = 24
              BorderStyle = bsNone
              TabOrder = 2
            end
            object Edit4: TEdit
              Left = 8
              Top = 176
              Width = 209
              Height = 24
              BorderStyle = bsNone
              TabOrder = 3
            end
            object Button5: TButton
              Left = 8
              Top = 537
              Width = 209
              Height = 25
              Anchors = [akLeft, akRight, akBottom]
              Caption = #1047#1072#1087#1086#1083#1085#1080#1090#1100' '#1046#1091#1088#1085#1072#1083
              TabOrder = 4
            end
            object Button6: TButton
              Left = 8
              Top = 568
              Width = 209
              Height = 25
              Anchors = [akLeft, akRight, akBottom]
              Caption = #1048#1079#1084#1077#1085#1080#1090#1100' '#1046#1091#1088#1085#1072#1083
              TabOrder = 5
            end
            object Edit5: TEdit
              Left = 8
              Top = 228
              Width = 209
              Height = 24
              BorderStyle = bsNone
              TabOrder = 6
            end
            object Button7: TButton
              Left = 8
              Top = 466
              Width = 209
              Height = 25
              Caption = #1054#1095#1080#1089#1090#1080#1090#1100
              TabOrder = 7
            end
            object Edit10: TEdit
              Left = 8
              Top = 288
              Width = 209
              Height = 24
              BorderStyle = bsNone
              TabOrder = 8
              Visible = False
            end
          end
          object Button8: TButton
            Left = 964
            Top = 38
            Width = 223
            Height = 25
            Caption = #1046#1091#1088#1085#1072#1083' '#1043#1088#1091#1087#1087#1099
            TabOrder = 6
          end
          object StringGrid1: TStringGrid
            Left = 16
            Top = 62
            Width = 913
            Height = 598
            FixedRows = 3
            TabOrder = 7
          end
          object ComboBox14: TComboBox
            Left = 663
            Top = 32
            Width = 147
            Height = 24
            TabOrder = 8
          end
        end
        object TabSheet9: TTabSheet
          Caption = #1056#1072#1089#1087#1080#1089#1072#1085#1080#1077
          ImageIndex = 2
          ExplicitLeft = 0
          ExplicitTop = 0
          ExplicitWidth = 0
          ExplicitHeight = 0
          DesignSize = (
            1214
            669)
          object SpeedButton30: TSpeedButton
            Left = 3
            Top = 83
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object SpeedButton31: TSpeedButton
            Left = 3
            Top = 163
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object SpeedButton32: TSpeedButton
            Left = 3
            Top = 247
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object SpeedButton33: TSpeedButton
            Left = 3
            Top = 331
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object SpeedButton34: TSpeedButton
            Left = 3
            Top = 415
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object StringGrid4: TStringGrid
            Left = 137
            Top = 112
            Width = 1062
            Height = 409
            ColCount = 7
            DefaultColWidth = 150
            DefaultRowHeight = 80
            FixedCols = 0
            FixedRows = 0
            TabOrder = 0
          end
          object PageControl6: TPageControl
            Left = -8
            Top = -31
            Width = 1222
            Height = 700
            ActivePage = TabSheet14
            Anchors = [akLeft, akTop, akRight, akBottom]
            TabOrder = 1
            object TabSheet10: TTabSheet
              Caption = #1057#1087#1088#1072#1074#1086#1095#1085#1080#1082
              object Label14: TLabel
                Left = 16
                Top = 32
                Width = 37
                Height = 16
                Caption = 'Label1'
              end
              object Button13: TButton
                Left = 112
                Top = 25
                Width = 121
                Height = 33
                Caption = #1055#1088#1077#1087#1086#1076#1072#1074#1072#1090#1077#1083#1080
                TabOrder = 0
              end
              object Button14: TButton
                Left = 112
                Top = 64
                Width = 121
                Height = 33
                Caption = #1055#1088#1077#1076#1084#1077#1090#1099
                TabOrder = 1
              end
              object Button15: TButton
                Left = 112
                Top = 103
                Width = 121
                Height = 33
                Caption = #1043#1088#1091#1087#1087#1099
                TabOrder = 2
              end
            end
            object TabSheet11: TTabSheet
              Caption = #1046#1091#1088#1085#1072#1083
              ImageIndex = 1
              ExplicitLeft = 0
              ExplicitTop = 0
              ExplicitWidth = 0
              ExplicitHeight = 0
              DesignSize = (
                1214
                669)
              object Label15: TLabel
                Left = 16
                Top = 10
                Width = 96
                Height = 16
                Caption = #1055#1088#1077#1087#1086#1076#1072#1074#1072#1090#1077#1083#1100':'
              end
              object Label16: TLabel
                Left = 303
                Top = 10
                Width = 55
                Height = 16
                Caption = #1055#1088#1077#1076#1084#1077#1090':'
              end
              object Label17: TLabel
                Left = 583
                Top = 10
                Width = 46
                Height = 16
                Caption = #1043#1088#1091#1087#1087#1072':'
              end
              object Label18: TLabel
                Left = 783
                Top = 10
                Width = 54
                Height = 16
                Caption = #1057#1077#1084#1077#1089#1090#1088':'
              end
              object ComboBox7: TComboBox
                Left = 303
                Top = 32
                Width = 234
                Height = 24
                TabOrder = 0
              end
              object ComboBox8: TComboBox
                Left = 16
                Top = 32
                Width = 241
                Height = 24
                TabOrder = 1
              end
              object ComboBox9: TComboBox
                Left = 583
                Top = 32
                Width = 154
                Height = 24
                TabOrder = 2
              end
              object ComboBox10: TComboBox
                Left = 783
                Top = 32
                Width = 146
                Height = 24
                TabOrder = 3
              end
              object Button16: TButton
                Left = 964
                Top = 7
                Width = 223
                Height = 25
                Caption = #1054#1090#1082#1088#1099#1090#1100' '#1046#1091#1088#1085#1072#1083
                TabOrder = 4
              end
              object Panel5: TPanel
                Left = 976
                Top = 69
                Width = 223
                Height = 588
                Anchors = [akTop, akRight, akBottom]
                TabOrder = 5
                DesignSize = (
                  223
                  588)
                object Label19: TLabel
                  Left = 8
                  Top = 50
                  Width = 52
                  Height = 16
                  Caption = #1057#1090#1091#1076#1077#1085#1090':'
                end
                object Label20: TLabel
                  Left = 8
                  Top = 154
                  Width = 61
                  Height = 16
                  Caption = #1047#1085#1072#1095#1077#1085#1080#1077':'
                end
                object Label21: TLabel
                  Left = 8
                  Top = 206
                  Width = 34
                  Height = 16
                  Caption = #1044#1072#1090#1072':'
                end
                object Label22: TLabel
                  Left = 8
                  Top = 102
                  Width = 34
                  Height = 16
                  Caption = #1055#1072#1088#1072':'
                end
                object Label29: TLabel
                  Left = 8
                  Top = 258
                  Width = 50
                  Height = 16
                  Caption = #1055#1088#1077#1076#1084#1077#1090
                  Visible = False
                end
                object DateTimePicker3: TDateTimePicker
                  Left = 5
                  Top = 8
                  Width = 212
                  Height = 24
                  Date = 45258.978373599540000000
                  Time = 45258.978373599540000000
                  DoubleBuffered = False
                  ParentDoubleBuffered = False
                  ParentShowHint = False
                  ShowHint = False
                  TabOrder = 0
                end
                object Edit16: TEdit
                  Left = 8
                  Top = 72
                  Width = 209
                  Height = 24
                  BorderStyle = bsNone
                  TabOrder = 1
                end
                object Edit17: TEdit
                  Left = 8
                  Top = 124
                  Width = 209
                  Height = 24
                  BorderStyle = bsNone
                  TabOrder = 2
                end
                object Edit18: TEdit
                  Left = 8
                  Top = 176
                  Width = 209
                  Height = 24
                  BorderStyle = bsNone
                  TabOrder = 3
                end
                object Button17: TButton
                  Left = 8
                  Top = 528
                  Width = 209
                  Height = 25
                  Anchors = [akLeft, akRight, akBottom]
                  Caption = #1047#1072#1087#1086#1083#1085#1080#1090#1100' '#1046#1091#1088#1085#1072#1083
                  TabOrder = 4
                end
                object Button18: TButton
                  Left = 8
                  Top = 559
                  Width = 209
                  Height = 25
                  Anchors = [akLeft, akRight, akBottom]
                  Caption = #1048#1079#1084#1077#1085#1080#1090#1100' '#1046#1091#1088#1085#1072#1083
                  TabOrder = 5
                end
                object Edit19: TEdit
                  Left = 8
                  Top = 228
                  Width = 209
                  Height = 24
                  BorderStyle = bsNone
                  TabOrder = 6
                end
                object Button19: TButton
                  Left = 8
                  Top = 474
                  Width = 209
                  Height = 25
                  Caption = #1054#1095#1080#1089#1090#1080#1090#1100
                  TabOrder = 7
                end
                object Edit20: TEdit
                  Left = 8
                  Top = 288
                  Width = 209
                  Height = 24
                  BorderStyle = bsNone
                  TabOrder = 8
                  Visible = False
                end
              end
              object Button20: TButton
                Left = 964
                Top = 38
                Width = 223
                Height = 25
                Caption = #1046#1091#1088#1085#1072#1083' '#1043#1088#1091#1087#1087#1099
                TabOrder = 6
              end
              object StringGrid5: TStringGrid
                Left = 16
                Top = 62
                Width = 913
                Height = 595
                FixedRows = 3
                TabOrder = 7
              end
            end
            object TabSheet12: TTabSheet
              Caption = #1056#1072#1089#1087#1080#1089#1072#1085#1080#1077
              ImageIndex = 2
              object SpeedButton35: TSpeedButton
                Left = 3
                Top = 83
                Width = 130
                Height = 78
                Caption = '1 '#1087#1072#1088#1072' \n '
              end
              object SpeedButton36: TSpeedButton
                Left = 3
                Top = 163
                Width = 130
                Height = 78
                Caption = '1 '#1087#1072#1088#1072' \n '
              end
              object SpeedButton37: TSpeedButton
                Left = 3
                Top = 247
                Width = 130
                Height = 78
                Caption = '1 '#1087#1072#1088#1072' \n '
              end
              object SpeedButton38: TSpeedButton
                Left = 3
                Top = 331
                Width = 130
                Height = 78
                Caption = '1 '#1087#1072#1088#1072' \n '
              end
              object SpeedButton39: TSpeedButton
                Left = 3
                Top = 415
                Width = 130
                Height = 78
                Caption = '1 '#1087#1072#1088#1072' \n '
              end
              object StringGrid7: TStringGrid
                Left = 137
                Top = 112
                Width = 1062
                Height = 409
                ColCount = 7
                DefaultColWidth = 150
                DefaultRowHeight = 80
                FixedCols = 0
                FixedRows = 0
                TabOrder = 0
              end
            end
            object TabSheet14: TTabSheet
              Caption = #1057#1086#1089#1090#1072#1074#1080#1090#1100' '#1056#1072#1089#1087#1080#1089#1072#1085#1080#1077
              ImageIndex = 3
              ExplicitLeft = 0
              ExplicitTop = 0
              ExplicitWidth = 0
              ExplicitHeight = 0
              object SpeedButton40: TSpeedButton
                Left = 7
                Top = 71
                Width = 130
                Height = 78
                Caption = '1 '#1087#1072#1088#1072' \n '
              end
              object SpeedButton41: TSpeedButton
                Left = 7
                Top = 151
                Width = 130
                Height = 78
                Caption = '1 '#1087#1072#1088#1072' \n '
              end
              object SpeedButton42: TSpeedButton
                Left = 7
                Top = 235
                Width = 130
                Height = 78
                Caption = '1 '#1087#1072#1088#1072' \n '
              end
              object SpeedButton43: TSpeedButton
                Left = 7
                Top = 319
                Width = 130
                Height = 78
                Caption = '1 '#1087#1072#1088#1072' \n '
              end
              object SpeedButton44: TSpeedButton
                Left = 7
                Top = 403
                Width = 130
                Height = 82
                Caption = '1 '#1087#1072#1088#1072' \n '
              end
              object SpeedButton45: TSpeedButton
                Left = 139
                Top = 15
                Width = 150
                Height = 54
              end
              object SpeedButton46: TSpeedButton
                Left = 295
                Top = 16
                Width = 146
                Height = 54
              end
              object SpeedButton47: TSpeedButton
                Left = 447
                Top = 16
                Width = 146
                Height = 54
              end
              object SpeedButton48: TSpeedButton
                Left = 599
                Top = 16
                Width = 146
                Height = 53
              end
              object SpeedButton49: TSpeedButton
                Left = 751
                Top = 16
                Width = 146
                Height = 53
              end
              object SpeedButton50: TSpeedButton
                Left = 903
                Top = 16
                Width = 146
                Height = 54
              end
              object SpeedButton51: TSpeedButton
                Left = 1055
                Top = 16
                Width = 148
                Height = 53
              end
              object StringGrid8: TStringGrid
                Left = 143
                Top = 75
                Width = 1062
                Height = 410
                ColCount = 7
                DefaultColWidth = 150
                DefaultRowHeight = 80
                FixedCols = 0
                FixedRows = 0
                TabOrder = 0
                OnSelectCell = StringGrid3SelectCell
              end
              object Panel6: TPanel
                Left = 13
                Top = 491
                Width = 1198
                Height = 166
                TabOrder = 1
                object Label30: TLabel
                  Left = 664
                  Top = 0
                  Width = 311
                  Height = 16
                  Caption = #1048#1084#1077#1102#1097#1080#1077#1089#1103' '#1085#1077#1076#1077#1083#1080' '#1074' '#1056#1072#1089#1087#1080#1089#1072#1085#1080#1080' '#1079#1072' '#1091#1082#1072#1079#1072#1085#1085#1099#1081' '#1075#1086#1076':'
                end
                object Label31: TLabel
                  Left = 0
                  Top = 0
                  Width = 333
                  Height = 16
                  Caption = #1044#1083#1103' '#1087#1086#1082#1072#1079#1072' '#1088#1072#1089#1087#1080#1089#1072#1085#1080#1103' '#1091#1082#1072#1078#1080#1090#1077' '#1075#1088#1091#1087#1087#1091', '#1082#1091#1088#1089' '#1080' '#1089#1077#1084#1077#1089#1090#1088'.'
                end
                object Label32: TLabel
                  Left = 0
                  Top = 14
                  Width = 322
                  Height = 16
                  Caption = #1058#1072#1082' '#1078#1077' '#1084#1086#1078#1077#1090#1077' '#1091#1082#1072#1079#1072#1090#1100' '#1085#1077#1076#1077#1083#1102' '#1080' '#1075#1086#1076', '#1076#1083#1103' '#1087#1088#1086#1089#1084#1086#1090#1088#1072'.'
                end
                object Label33: TLabel
                  Left = 0
                  Top = 28
                  Width = 362
                  Height = 16
                  Caption = #1055#1086' '#1091#1084#1086#1083#1095#1072#1085#1080#1102' '#1087#1086#1082#1072#1079#1099#1074#1072#1077#1090#1089#1103' '#1087#1086#1089#1083#1077#1076#1085#1103#1103' '#1080#1084#1077#1102#1097#1072#1103#1089#1103' '#1085#1077#1076#1077#1083#1103')'
                end
                object Button25: TButton
                  Left = 698
                  Top = 75
                  Width = 239
                  Height = 46
                  Caption = #1054#1090#1082#1088#1099#1090#1100' '#1056#1072#1089#1087#1080#1089#1072#1085#1080#1077
                  TabOrder = 0
                  OnClick = Button21Click
                end
                object Edit23: TEdit
                  Left = 381
                  Top = 90
                  Width = 237
                  Height = 24
                  TabOrder = 1
                  Text = #1043#1086#1076
                end
                object Button26: TButton
                  Left = 845
                  Top = 22
                  Width = 130
                  Height = 25
                  Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1089#1087#1080#1089#1086#1082
                  TabOrder = 2
                  OnClick = Button22Click
                end
                object Edit24: TEdit
                  Left = 664
                  Top = 22
                  Width = 175
                  Height = 24
                  TabOrder = 3
                  Text = #1057#1087#1080#1089#1086#1082' '#1085#1077#1076#1077#1083#1100
                end
                object ComboBox15: TComboBox
                  Left = 381
                  Top = 0
                  Width = 237
                  Height = 24
                  TabOrder = 4
                  Text = #1043#1088#1091#1087#1087#1072
                  OnDropDown = ComboBox11DropDown
                end
                object ComboBox16: TComboBox
                  Left = 381
                  Top = 30
                  Width = 237
                  Height = 24
                  TabOrder = 5
                  Text = #1050#1091#1088#1089
                  OnDropDown = ComboBox12DropDown
                end
                object ComboBox17: TComboBox
                  Left = 381
                  Top = 120
                  Width = 237
                  Height = 24
                  TabOrder = 6
                  Text = #1057#1077#1084#1077#1089#1090#1088
                  Visible = False
                end
                object Edit25: TEdit
                  Left = 381
                  Top = 60
                  Width = 237
                  Height = 24
                  TabOrder = 7
                  Text = #1053#1077#1076#1077#1083#1103
                end
                object DateTimePicker5: TDateTimePicker
                  Left = 0
                  Top = 64
                  Width = 237
                  Height = 24
                  Date = 45316.702427465280000000
                  Time = 45316.702427465280000000
                  TabOrder = 8
                end
              end
            end
          end
        end
        object TabSheet16: TTabSheet
          Caption = #1055#1086#1080#1089#1082' '#1087#1086' '#1056#1072#1089#1087#1080#1089#1072#1085#1080#1102
          ImageIndex = 4
          ExplicitLeft = 0
          ExplicitTop = 0
          ExplicitWidth = 0
          ExplicitHeight = 0
          object Label49: TLabel
            Left = 3
            Top = 74
            Width = 39
            Height = 16
            Caption = #1055#1072#1088#1072':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label50: TLabel
            Left = 161
            Top = 74
            Width = 111
            Height = 16
            Caption = #1055#1088#1077#1087#1086#1076#1086#1074#1072#1090#1077#1083#1100':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label57: TLabel
            Left = 408
            Top = 74
            Width = 52
            Height = 16
            Caption = #1043#1088#1091#1087#1087#1072':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label58: TLabel
            Left = 528
            Top = 74
            Width = 38
            Height = 16
            Caption = #1044#1072#1090#1072':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label59: TLabel
            Left = 3
            Top = 130
            Width = 36
            Height = 16
            Caption = #1050#1091#1088#1089':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label60: TLabel
            Left = 161
            Top = 130
            Width = 59
            Height = 16
            Caption = #1050#1072#1073#1080#1085#1077#1090':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label61: TLabel
            Left = 369
            Top = 130
            Width = 91
            Height = 16
            Caption = #1044#1077#1085#1100' '#1085#1077#1076#1077#1083#1080':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label62: TLabel
            Left = 872
            Top = 2
            Width = 180
            Height = 16
            Caption = #1057#1087#1080#1089#1086#1082' '#1055#1091#1089#1090#1099#1093' '#1040#1091#1076#1080#1090#1086#1088#1080#1081':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label63: TLabel
            Left = 3
            Top = 3
            Width = 654
            Height = 16
            Caption = 
              #1054#1073#1097#1080#1081' '#1087#1086#1080#1089#1082' '#1087#1088#1077#1076#1086#1089#1090#1072#1074#1083#1103#1077#1090' '#1074#1086#1079#1084#1086#1078#1085#1086#1089#1090#1100' '#1087#1086#1080#1089#1082#1072' '#1074#1089#1077#1093' '#1074#1086#1079#1084#1086#1078#1085#1099#1093' '#1087#1086#1083#1077 +
              #1081' '#1087#1088#1080#1074#1077#1076#1077#1085#1085#1099#1093' '#1085#1080#1078#1077'. '#1055#1086' '#1091#1084#1086#1083#1095#1072#1085#1080#1102', '
          end
          object Label64: TLabel
            Left = 3
            Top = 17
            Width = 651
            Height = 16
            Caption = 
              #1077#1089#1083#1080' '#1085#1077' '#1074#1099#1073#1088#1072#1085#1099' '#1087#1086#1083#1103' '#1044#1040#1058#1040', '#1053#1045#1044#1045#1051#1071', '#1059#1063#1045#1041#1053#1067#1049' '#1043#1054#1044', '#1090#1086' '#1074#1099#1073#1080#1088#1072#1077#1090#1089#1103' '#1087#1086 +
              #1089#1083#1077#1076#1085#1103#1103' '#1080#1084#1077#1102#1097#1072#1103' '#1085#1077#1076#1077#1083#1103', '#1090#1077#1082#1091#1097#1077#1075#1086
          end
          object Label65: TLabel
            Left = 3
            Top = 31
            Width = 644
            Height = 16
            Caption = 
              #1075#1086#1076#1072'. '#1055#1088#1080#1084#1077#1095#1072#1085#1080#1077': '#1044#1083#1103' '#1087#1086#1080#1089#1082#1072' '#1072#1091#1076#1080#1090#1086#1088#1080#1081' '#1085#1091#1078#1085#1086' '#1074#1099#1073#1088#1072#1090#1100' '#1087#1072#1088#1091', '#1086#1087#1103#1090#1100 +
              ' '#1078#1077' '#1087#1086' '#1091#1084#1086#1083#1095#1072#1085#1080#1102', '#1087#1086#1089#1083#1077#1076#1085#1103#1103' '#1085#1077#1076#1077#1083#1103' '
          end
          object Label66: TLabel
            Left = 3
            Top = 52
            Width = 4
            Height = 16
          end
          object Label67: TLabel
            Left = 3
            Top = 45
            Width = 627
            Height = 16
            Caption = 
              #1090#1077#1082#1097#1077#1075#1086' '#1075#1086#1076#1072'. '#1040' '#1076#1083#1103' '#1074#1099#1074#1086#1076#1072' '#1087#1091#1089#1090#1099#1093' '#1072#1091#1076#1080#1090#1086#1088#1080#1081' '#1076#1083#1103' '#1076#1072#1085#1085#1086#1081' '#1087#1072#1088#1099', '#1085#1077#1086 +
              #1073#1093#1086#1076#1080#1084#1086' '#1085#1072#1078#1072#1090#1100' '#1087#1086#1089#1083#1077#1076#1085#1102#1102' '#1082#1085#1086#1087#1082#1091'.'
          end
          object DBGrid4: TDBGrid
            Left = 3
            Top = 200
            Width = 1206
            Height = 457
            DataSource = DataSource1
            ReadOnly = True
            TabOrder = 0
            TitleFont.Charset = DEFAULT_CHARSET
            TitleFont.Color = clWindowText
            TitleFont.Height = -13
            TitleFont.Name = 'Tahoma'
            TitleFont.Style = []
            Columns = <
              item
                Alignment = taCenter
                Expanded = False
                FieldName = 'data'
                Title.Alignment = taCenter
                Title.Caption = #1044#1072#1090#1072
                Title.Font.Charset = DEFAULT_CHARSET
                Title.Font.Color = clWindowText
                Title.Font.Height = -13
                Title.Font.Name = 'Tahoma'
                Title.Font.Style = [fsBold, fsUnderline]
                Width = 90
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'week_day'
                Title.Alignment = taCenter
                Title.Caption = #1044#1077#1085#1100' '#1085#1077#1076#1077#1083#1080
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
                FieldName = 'para'
                Title.Alignment = taCenter
                Title.Caption = #1055#1072#1088#1072
                Title.Font.Charset = DEFAULT_CHARSET
                Title.Font.Color = clWindowText
                Title.Font.Height = -13
                Title.Font.Name = 'Tahoma'
                Title.Font.Style = [fsBold, fsUnderline]
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'Name'
                Title.Alignment = taCenter
                Title.Caption = #1055#1088#1077#1087#1086#1076#1086#1074#1072#1090#1077#1083#1100
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
                FieldName = 'Name_1'
                Title.Alignment = taCenter
                Title.Caption = #1055#1088#1077#1076#1084#1077#1090
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
                FieldName = 'tipe'
                Title.Alignment = taCenter
                Title.Caption = #1058#1080#1087' '#1079#1072#1085#1103#1090#1080#1103
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
                FieldName = 'Name_2'
                Title.Alignment = taCenter
                Title.Caption = #1043#1088#1091#1087#1087#1072
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
                FieldName = 'Cours'
                Title.Alignment = taCenter
                Title.Caption = #1050#1091#1088#1089
                Title.Font.Charset = DEFAULT_CHARSET
                Title.Font.Color = clWindowText
                Title.Font.Height = -13
                Title.Font.Name = 'Tahoma'
                Title.Font.Style = [fsBold, fsUnderline]
                Width = 40
                Visible = True
              end
              item
                Alignment = taCenter
                Expanded = False
                FieldName = 'room'
                Title.Alignment = taCenter
                Title.Caption = #1050#1072#1073#1080#1085#1077#1090
                Title.Font.Charset = DEFAULT_CHARSET
                Title.Font.Color = clWindowText
                Title.Font.Height = -13
                Title.Font.Name = 'Tahoma'
                Title.Font.Style = [fsBold, fsUnderline]
                Width = 60
                Visible = True
              end
              item
                Alignment = taCenter
                Expanded = False
                FieldName = 'week'
                Title.Caption = #1053#1077#1076#1077#1083#1103
                Title.Font.Charset = DEFAULT_CHARSET
                Title.Font.Color = clWindowText
                Title.Font.Height = -13
                Title.Font.Name = 'Tahoma'
                Title.Font.Style = [fsBold, fsUnderline]
                Width = 55
                Visible = True
              end
              item
                Alignment = taCenter
                Expanded = False
                FieldName = 'year'
                Title.Alignment = taCenter
                Title.Caption = #1059#1095'.'#1043#1086#1076
                Title.Font.Charset = DEFAULT_CHARSET
                Title.Font.Color = clWindowText
                Title.Font.Height = -13
                Title.Font.Name = 'Tahoma'
                Title.Font.Style = [fsBold, fsUnderline]
                Visible = True
              end>
          end
          object ComboBox18: TComboBox
            Left = 3
            Top = 96
            Width = 145
            Height = 24
            TabOrder = 1
            Text = #1055#1072#1088#1072
            Items.Strings = (
              '1'
              '2'
              '3'
              '4'
              '5')
          end
          object ComboBox27: TComboBox
            Left = 161
            Top = 96
            Width = 232
            Height = 24
            TabOrder = 2
            Text = #1055#1088#1077#1087#1086#1076
          end
          object ComboBox28: TComboBox
            Left = 408
            Top = 96
            Width = 105
            Height = 24
            TabOrder = 3
            Text = #1043#1088#1091#1087#1087#1072
          end
          object ComboBox31: TComboBox
            Left = 3
            Top = 152
            Width = 145
            Height = 24
            TabOrder = 4
            Text = #1050#1091#1088#1089
            Items.Strings = (
              '1'
              '2'
              '3'
              '4')
          end
          object ComboBox32: TComboBox
            Left = 161
            Top = 152
            Width = 184
            Height = 24
            TabOrder = 5
            Text = #1050#1072#1073#1080#1085#1077#1090
          end
          object ListBox3: TListBox
            Left = 872
            Top = 24
            Width = 329
            Height = 170
            TabOrder = 6
          end
          object Button31: TButton
            Left = 672
            Top = 96
            Width = 194
            Height = 42
            Caption = #1054#1073#1097#1080#1081' '#1087#1086#1080#1089#1082
            TabOrder = 7
          end
          object Button33: TButton
            Left = 672
            Top = 144
            Width = 194
            Height = 32
            Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1089#1087#1080#1089#1086#1082' '#1087#1091#1089#1090#1099#1093' '#1072#1091#1076'.'
            TabOrder = 8
          end
          object DateTimePicker8: TDateTimePicker
            Left = 528
            Top = 96
            Width = 129
            Height = 24
            Date = 45326.895644085650000000
            Time = 45326.895644085650000000
            TabOrder = 9
          end
          object Button34: TButton
            Left = 535
            Top = 152
            Width = 122
            Height = 25
            Caption = #1054#1095#1080#1089#1090#1080#1090#1100
            TabOrder = 10
          end
          object ComboBox33: TComboBox
            Left = 369
            Top = 152
            Width = 160
            Height = 24
            TabOrder = 11
            Text = #1044#1077#1085#1100' '#1085#1077#1076#1077#1083#1080
            Items.Strings = (
              #1087#1086#1085#1077#1076#1077#1083#1100#1085#1080#1082
              #1074#1090#1086#1088#1085#1080#1082
              #1089#1088#1077#1076#1072
              #1095#1077#1090#1074#1077#1088#1075
              #1087#1103#1090#1085#1080#1094#1072
              #1089#1091#1073#1073#1086#1090#1072
              #1074#1086#1089#1082#1088#1077#1089#1077#1085#1100#1077)
          end
          object ComboBox34: TComboBox
            Left = 704
            Top = 33
            Width = 145
            Height = 24
            TabOrder = 12
            Text = #1075#1086#1076
            Visible = False
          end
          object ComboBox35: TComboBox
            Left = 704
            Top = 8
            Width = 145
            Height = 24
            TabOrder = 13
            Text = #1085#1077#1076#1077#1083#1103
            Visible = False
          end
        end
        object TabSheet17: TTabSheet
          Caption = #1057#1086#1089#1090#1072#1074#1080#1090#1100' '#1056#1072#1089#1087#1080#1089#1072#1085#1080#1077
          ImageIndex = 3
          ExplicitLeft = 0
          ExplicitTop = 0
          ExplicitWidth = 0
          ExplicitHeight = 0
          object SpeedButton52: TSpeedButton
            Left = 3
            Top = 59
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object SpeedButton53: TSpeedButton
            Left = 3
            Top = 139
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object SpeedButton54: TSpeedButton
            Left = 3
            Top = 223
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object SpeedButton55: TSpeedButton
            Left = 3
            Top = 307
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object SpeedButton56: TSpeedButton
            Left = 3
            Top = 391
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object SpeedButton57: TSpeedButton
            Left = 139
            Top = -1
            Width = 150
            Height = 54
          end
          object SpeedButton58: TSpeedButton
            Left = 295
            Top = 0
            Width = 146
            Height = 54
          end
          object SpeedButton59: TSpeedButton
            Left = 447
            Top = 0
            Width = 146
            Height = 54
          end
          object SpeedButton60: TSpeedButton
            Left = 599
            Top = 0
            Width = 146
            Height = 53
          end
          object SpeedButton61: TSpeedButton
            Left = 751
            Top = 0
            Width = 146
            Height = 53
          end
          object SpeedButton62: TSpeedButton
            Left = 903
            Top = 0
            Width = 146
            Height = 54
          end
          object SpeedButton63: TSpeedButton
            Left = 1055
            Top = 0
            Width = 148
            Height = 53
          end
          object StringGrid9: TStringGrid
            Left = 139
            Top = 59
            Width = 1062
            Height = 409
            ColCount = 7
            DefaultColWidth = 150
            DefaultRowHeight = 80
            FixedCols = 0
            FixedRows = 0
            TabOrder = 0
            OnSelectCell = StringGrid3SelectCell
          end
          object Panel7: TPanel
            Left = 0
            Top = 475
            Width = 1201
            Height = 183
            TabOrder = 1
            object Label68: TLabel
              Left = 3
              Top = 91
              Width = 266
              Height = 16
              Caption = #1054#1090#1082#1088#1099#1090#1100' '#1088#1072#1089#1087#1080#1089#1072#1085#1080#1077' '#1076#1083#1103' '#1074#1099#1073#1088#1072#1085#1085#1086#1081' '#1085#1077#1076#1077#1083#1080' '
            end
            object Label69: TLabel
              Left = 3
              Top = 8
              Width = 311
              Height = 16
              Caption = #1048#1084#1077#1102#1097#1080#1077#1089#1103' '#1085#1077#1076#1077#1083#1080' '#1074' '#1056#1072#1089#1087#1080#1089#1072#1085#1080#1080' '#1079#1072' '#1091#1082#1072#1079#1072#1085#1085#1099#1081' '#1075#1086#1076':'
            end
            object Label70: TLabel
              Left = 3
              Top = 107
              Width = 96
              Height = 16
              Caption = #1080' '#1087#1086#1087#1086#1083#1085#1080#1090#1100' '#1077#1077':'
            end
            object ComboBox36: TComboBox
              Left = 332
              Top = 90
              Width = 237
              Height = 24
              TabOrder = 0
              Text = #1055#1088#1077#1076#1084#1077#1090
              OnDropDown = ComboBox1DropDown
            end
            object ComboBox37: TComboBox
              Left = 332
              Top = 122
              Width = 237
              Height = 24
              TabOrder = 1
              Text = #1055#1088#1077#1087#1086#1076
              OnDropDown = ComboBox2DropDown
            end
            object ComboBox38: TComboBox
              Left = 332
              Top = 152
              Width = 237
              Height = 24
              ParentShowHint = False
              ShowHint = False
              TabOrder = 2
              Text = #1050#1072#1073#1080#1085#1077#1090
              OnDropDown = ComboBox3DropDown
            end
            object Edit26: TEdit
              Left = 575
              Top = 0
              Width = 247
              Height = 24
              TabOrder = 3
              Text = #1044#1077#1085#1100' '#1085#1077#1076#1077#1083#1080
            end
            object ComboBox39: TComboBox
              Left = 332
              Top = 0
              Width = 237
              Height = 24
              TabOrder = 4
              Text = #1043#1088#1091#1087#1087#1072
              OnDropDown = ComboBox4DropDown
            end
            object ComboBox40: TComboBox
              Left = 332
              Top = 30
              Width = 237
              Height = 24
              TabOrder = 5
              Text = #1050#1091#1088#1089
              OnDropDown = ComboBox5DropDown
            end
            object Edit27: TEdit
              Left = 575
              Top = 30
              Width = 247
              Height = 24
              TabOrder = 6
              Text = #1053#1077#1076#1077#1083#1103
            end
            object DateTimePicker9: TDateTimePicker
              Left = 1015
              Top = 0
              Width = 178
              Height = 24
              Date = 45316.702427465280000000
              Time = 45316.702427465280000000
              TabOrder = 7
            end
            object Edit28: TEdit
              Left = 575
              Top = 60
              Width = 247
              Height = 24
              TabOrder = 8
              Text = #1055#1072#1088#1072
            end
            object Edit29: TEdit
              Left = 575
              Top = 90
              Width = 247
              Height = 24
              ReadOnly = True
              TabOrder = 9
              Text = #1055#1088#1072#1082#1090#1080#1095#1089#1077#1082#1080#1077' '#1079#1072#1085#1103#1090#1080#1103
            end
            object Edit30: TEdit
              Left = 575
              Top = 122
              Width = 247
              Height = 24
              ReadOnly = True
              TabOrder = 10
              Text = #1051#1077#1082#1094#1080#1086#1085#1085#1099#1077' '#1079#1072#1085#1103#1090#1080#1103
            end
            object Edit31: TEdit
              Left = 575
              Top = 152
              Width = 247
              Height = 24
              ReadOnly = True
              TabOrder = 11
              Text = #1057#1076#1072#1095#1072' '#1087#1088#1077#1076#1084#1077#1090#1072
            end
            object ComboBox41: TComboBox
              Left = 332
              Top = 60
              Width = 237
              Height = 24
              TabOrder = 12
              Text = #1057#1077#1084#1077#1089#1090#1088
              OnDropDown = ComboBox6DropDown
            end
            object Edit32: TEdit
              Left = 3
              Top = 129
              Width = 130
              Height = 24
              TabOrder = 13
              Text = #1053#1086#1084#1077#1088' '#1085#1077#1076#1077#1083#1080
            end
            object Button35: TButton
              Left = 139
              Top = 129
              Width = 175
              Height = 25
              Caption = #1054#1090#1082#1088#1099#1090#1100
              TabOrder = 14
              OnClick = Button9Click
            end
            object Edit33: TEdit
              Left = 3
              Top = 30
              Width = 130
              Height = 24
              TabOrder = 15
              Text = #1043#1086#1076
            end
            object Button36: TButton
              Left = 3
              Top = 60
              Width = 130
              Height = 25
              Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1089#1087#1080#1089#1086#1082
              TabOrder = 16
              OnClick = Button10Click
            end
            object Edit34: TEdit
              Left = 139
              Top = 44
              Width = 175
              Height = 24
              TabOrder = 17
              Text = #1057#1087#1080#1089#1086#1082' '#1085#1077#1076#1077#1083#1100
            end
            object Memo2: TMemo
              Left = 836
              Top = 30
              Width = 357
              Height = 114
              Lines.Strings = (
                #1055#1088#1086#1074#1077#1088#1100#1090#1077' '#1076#1072#1090#1091' '#1087#1088#1080' '#1076#1086#1073#1072#1074#1083#1077#1085#1080#1080', '#1087#1088#1086#1096#1091')')
              TabOrder = 18
            end
            object Edit35: TEdit
              Left = 836
              Top = 0
              Width = 173
              Height = 24
              TabOrder = 19
              Text = #1058#1080#1087' '#1079#1072#1085#1103#1090#1080#1103
            end
            object Button37: TButton
              Left = 1080
              Top = 150
              Width = 115
              Height = 25
              Caption = #1044#1086#1073#1072#1074#1080#1090#1100
              TabOrder = 20
              OnClick = Button11Click
            end
            object Button38: TButton
              Left = 960
              Top = 150
              Width = 114
              Height = 25
              Caption = #1054#1095#1080#1089#1090#1080#1090#1100
              TabOrder = 21
              OnClick = Button12Click
            end
            object Button39: TButton
              Left = 840
              Top = 150
              Width = 114
              Height = 25
              Caption = #1059#1076#1072#1083#1080#1090#1100
              TabOrder = 22
              OnClick = Button24Click
            end
          end
        end
      end
    end
    object TabSheet2: TTabSheet
      Caption = #1059#1095#1077#1073#1085#1081#1099' '#1087#1083#1072#1085
      ImageIndex = 1
      ExplicitWidth = 1383
      ExplicitHeight = 722
      DesignSize = (
        1223
        658)
      object DBGrid1: TDBGrid
        Left = 3
        Top = 164
        Width = 1217
        Height = 491
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
        Width = 1217
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
        ExplicitWidth = 1377
        DesignSize = (
          1213
          151)
        object audit: TEdit
          Left = 392
          Top = 10
          Width = 119
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
          ExplicitWidth = 279
        end
        object lec: TEdit
          Left = 392
          Top = 54
          Width = 119
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
          ExplicitWidth = 279
        end
        object prac: TEdit
          Left = 392
          Top = 99
          Width = 119
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
          ExplicitWidth = 279
        end
        object lab: TEdit
          Left = 677
          Top = 10
          Width = 164
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
          ExplicitWidth = 324
        end
        object semenar: TEdit
          Left = 677
          Top = 54
          Width = 164
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
          ExplicitWidth = 324
        end
        object sam: TEdit
          Left = 677
          Top = 99
          Width = 164
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
          ExplicitWidth = 324
        end
        object add: TButton
          Left = 847
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
          ExplicitLeft = 1007
        end
        object update: TButton
          Left = 1038
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
          ExplicitLeft = 1198
        end
        object delet: TButton
          Left = 847
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
          ExplicitLeft = 1007
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
          Left = 1038
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
      ExplicitWidth = 1383
      ExplicitHeight = 722
      object SpeedButton13: TSpeedButton
        Left = 3
        Top = 59
        Width = 130
        Height = 78
        Caption = '1 '#1087#1072#1088#1072' \n '
      end
      object SpeedButton14: TSpeedButton
        Left = 3
        Top = 139
        Width = 130
        Height = 78
        Caption = '1 '#1087#1072#1088#1072' \n '
      end
      object SpeedButton15: TSpeedButton
        Left = 3
        Top = 223
        Width = 130
        Height = 78
        Caption = '1 '#1087#1072#1088#1072' \n '
      end
      object SpeedButton16: TSpeedButton
        Left = 3
        Top = 307
        Width = 130
        Height = 78
        Caption = '1 '#1087#1072#1088#1072' \n '
      end
      object SpeedButton17: TSpeedButton
        Left = 3
        Top = 391
        Width = 130
        Height = 78
        Caption = '1 '#1087#1072#1088#1072' \n '
      end
      object SpeedButton18: TSpeedButton
        Left = 139
        Top = -1
        Width = 150
        Height = 54
      end
      object SpeedButton19: TSpeedButton
        Left = 295
        Top = 0
        Width = 146
        Height = 54
      end
      object SpeedButton20: TSpeedButton
        Left = 447
        Top = 0
        Width = 146
        Height = 54
      end
      object SpeedButton21: TSpeedButton
        Left = 599
        Top = 0
        Width = 146
        Height = 53
      end
      object SpeedButton22: TSpeedButton
        Left = 751
        Top = 0
        Width = 146
        Height = 53
      end
      object SpeedButton23: TSpeedButton
        Left = 903
        Top = 0
        Width = 146
        Height = 54
      end
      object SpeedButton24: TSpeedButton
        Left = 1055
        Top = 0
        Width = 148
        Height = 53
      end
      object Panel2: TPanel
        Left = 3
        Top = 472
        Width = 1201
        Height = 183
        TabOrder = 0
        object Label11: TLabel
          Left = 3
          Top = 91
          Width = 266
          Height = 16
          Caption = #1054#1090#1082#1088#1099#1090#1100' '#1088#1072#1089#1087#1080#1089#1072#1085#1080#1077' '#1076#1083#1103' '#1074#1099#1073#1088#1072#1085#1085#1086#1081' '#1085#1077#1076#1077#1083#1080' '
        end
        object Label12: TLabel
          Left = 3
          Top = 8
          Width = 311
          Height = 16
          Caption = #1048#1084#1077#1102#1097#1080#1077#1089#1103' '#1085#1077#1076#1077#1083#1080' '#1074' '#1056#1072#1089#1087#1080#1089#1072#1085#1080#1080' '#1079#1072' '#1091#1082#1072#1079#1072#1085#1085#1099#1081' '#1075#1086#1076':'
        end
        object Label28: TLabel
          Left = 3
          Top = 107
          Width = 96
          Height = 16
          Caption = #1080' '#1087#1086#1087#1086#1083#1085#1080#1090#1100' '#1077#1077':'
        end
        object ComboBox1: TComboBox
          Left = 332
          Top = 90
          Width = 237
          Height = 24
          TabOrder = 0
          Text = #1055#1088#1077#1076#1084#1077#1090
          OnDropDown = ComboBox1DropDown
        end
        object ComboBox2: TComboBox
          Left = 332
          Top = 122
          Width = 237
          Height = 24
          TabOrder = 1
          Text = #1055#1088#1077#1087#1086#1076
          OnDropDown = ComboBox2DropDown
        end
        object ComboBox3: TComboBox
          Left = 332
          Top = 152
          Width = 237
          Height = 24
          ParentShowHint = False
          ShowHint = False
          TabOrder = 2
          Text = #1050#1072#1073#1080#1085#1077#1090
          OnDropDown = ComboBox3DropDown
        end
        object Edit6: TEdit
          Left = 575
          Top = 0
          Width = 247
          Height = 24
          TabOrder = 3
          Text = #1044#1077#1085#1100' '#1085#1077#1076#1077#1083#1080
        end
        object ComboBox4: TComboBox
          Left = 332
          Top = 0
          Width = 237
          Height = 24
          TabOrder = 4
          Text = #1043#1088#1091#1087#1087#1072
          OnDropDown = ComboBox4DropDown
        end
        object ComboBox5: TComboBox
          Left = 332
          Top = 30
          Width = 237
          Height = 24
          TabOrder = 5
          Text = #1050#1091#1088#1089
          OnDropDown = ComboBox5DropDown
        end
        object Edit7: TEdit
          Left = 575
          Top = 30
          Width = 247
          Height = 24
          TabOrder = 6
          Text = #1053#1077#1076#1077#1083#1103
        end
        object DateTimePicker2: TDateTimePicker
          Left = 1015
          Top = 0
          Width = 178
          Height = 24
          Date = 45316.702427465280000000
          Time = 45316.702427465280000000
          TabOrder = 7
        end
        object Edit8: TEdit
          Left = 575
          Top = 60
          Width = 247
          Height = 24
          TabOrder = 8
          Text = #1055#1072#1088#1072
        end
        object Edit11: TEdit
          Left = 575
          Top = 152
          Width = 247
          Height = 24
          ReadOnly = True
          TabOrder = 9
          Text = #1057#1076#1072#1095#1072' '#1087#1088#1077#1076#1084#1077#1090#1072
        end
        object ComboBox6: TComboBox
          Left = 332
          Top = 60
          Width = 237
          Height = 24
          TabOrder = 10
          Text = #1057#1077#1084#1077#1089#1090#1088
          OnDropDown = ComboBox6DropDown
        end
        object Edit12: TEdit
          Left = 3
          Top = 129
          Width = 130
          Height = 24
          TabOrder = 11
          Text = #1053#1086#1084#1077#1088' '#1085#1077#1076#1077#1083#1080
        end
        object Button9: TButton
          Left = 139
          Top = 129
          Width = 175
          Height = 25
          Caption = #1054#1090#1082#1088#1099#1090#1100
          TabOrder = 12
          OnClick = Button9Click
        end
        object Edit13: TEdit
          Left = 3
          Top = 30
          Width = 130
          Height = 24
          TabOrder = 13
          Text = #1043#1086#1076
        end
        object Button10: TButton
          Left = 3
          Top = 60
          Width = 130
          Height = 25
          Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1089#1087#1080#1089#1086#1082
          TabOrder = 14
          OnClick = Button10Click
        end
        object Edit14: TEdit
          Left = 139
          Top = 44
          Width = 175
          Height = 24
          TabOrder = 15
          Text = #1057#1087#1080#1089#1086#1082' '#1085#1077#1076#1077#1083#1100
        end
        object Memo1: TMemo
          Left = 836
          Top = 30
          Width = 357
          Height = 114
          Lines.Strings = (
            #1055#1088#1086#1074#1077#1088#1100#1090#1077' '#1076#1072#1090#1091' '#1087#1088#1080' '#1076#1086#1073#1072#1074#1083#1077#1085#1080#1080', '#1087#1088#1086#1096#1091')')
          TabOrder = 16
        end
        object Edit15: TEdit
          Left = 836
          Top = 0
          Width = 173
          Height = 24
          TabOrder = 17
          Text = #1058#1080#1087' '#1079#1072#1085#1103#1090#1080#1103
        end
        object Button11: TButton
          Left = 1080
          Top = 150
          Width = 115
          Height = 25
          Caption = #1044#1086#1073#1072#1074#1080#1090#1100
          TabOrder = 18
          OnClick = Button11Click
        end
        object Button12: TButton
          Left = 960
          Top = 150
          Width = 114
          Height = 25
          Caption = #1054#1095#1080#1089#1090#1080#1090#1100
          TabOrder = 19
          OnClick = Button12Click
        end
        object Button24: TButton
          Left = 840
          Top = 150
          Width = 114
          Height = 25
          Caption = #1059#1076#1072#1083#1080#1090#1100
          TabOrder = 20
          OnClick = Button24Click
        end
        object Edit9: TMemo
          Left = 575
          Top = 90
          Width = 247
          Height = 56
          Lines.Strings = (
            'Edit9')
          TabOrder = 21
        end
      end
      object StringGrid3: TStringGrid
        Left = 139
        Top = 59
        Width = 1062
        Height = 409
        ColCount = 7
        DefaultColWidth = 150
        DefaultRowHeight = 80
        FixedCols = 0
        FixedRows = 0
        TabOrder = 1
        OnDrawCell = StringGrid6DrawCell
        OnSelectCell = StringGrid3SelectCell
      end
    end
    object TabSheet4: TTabSheet
      Caption = #1055#1086#1082#1072#1079' '#1088#1072#1089#1087#1080#1089#1072#1085#1080#1103
      ImageIndex = 3
      ExplicitWidth = 1377
      ExplicitHeight = 699
      DesignSize = (
        1223
        658)
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
        Width = 152
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
      object StringGrid6: TStringGrid
        Left = 147
        Top = 67
        Width = 1060
        Height = 410
        Anchors = [akLeft, akTop, akRight]
        ColCount = 7
        DefaultColWidth = 150
        DefaultRowHeight = 80
        FixedCols = 0
        FixedRows = 0
        TabOrder = 0
        OnDrawCell = StringGrid6DrawCell
        ExplicitWidth = 1220
      end
      object Panel4: TPanel
        Left = 15
        Top = 497
        Width = 1192
        Height = 158
        TabOrder = 1
        object Label24: TLabel
          Left = 640
          Top = 0
          Width = 311
          Height = 16
          Caption = #1048#1084#1077#1102#1097#1080#1077#1089#1103' '#1085#1077#1076#1077#1083#1080' '#1074' '#1056#1072#1089#1087#1080#1089#1072#1085#1080#1080' '#1079#1072' '#1091#1082#1072#1079#1072#1085#1085#1099#1081' '#1075#1086#1076':'
        end
        object Label23: TLabel
          Left = 0
          Top = 0
          Width = 271
          Height = 16
          Caption = #1044#1083#1103' '#1087#1086#1082#1072#1079#1072' '#1088#1072#1089#1087#1080#1089#1072#1085#1080#1103' '#1091#1082#1072#1078#1080#1090#1077' '#1075#1088#1091#1087#1087#1091', '#1082#1091#1088#1089'.'
        end
        object Label25: TLabel
          Left = 0
          Top = 14
          Width = 322
          Height = 16
          Caption = #1058#1072#1082' '#1078#1077' '#1084#1086#1078#1077#1090#1077' '#1091#1082#1072#1079#1072#1090#1100' '#1085#1077#1076#1077#1083#1102' '#1080' '#1075#1086#1076', '#1076#1083#1103' '#1087#1088#1086#1089#1084#1086#1090#1088#1072'.'
        end
        object Label26: TLabel
          Left = 0
          Top = 28
          Width = 362
          Height = 16
          Caption = #1055#1086' '#1091#1084#1086#1083#1095#1072#1085#1080#1102' '#1087#1086#1082#1072#1079#1099#1074#1072#1077#1090#1089#1103' '#1087#1086#1089#1083#1077#1076#1085#1103#1103' '#1080#1084#1077#1102#1097#1072#1103#1089#1103' '#1085#1077#1076#1077#1083#1103')'
        end
        object Button21: TButton
          Left = 957
          Top = 51
          Width = 188
          Height = 46
          Caption = #1054#1090#1082#1088#1099#1090#1100' '#1056#1072#1089#1087#1080#1089#1072#1085#1080#1077
          TabOrder = 0
          OnClick = Button21Click
        end
        object Edit22: TEdit
          Left = 381
          Top = 90
          Width = 237
          Height = 24
          TabOrder = 1
          Text = #1043#1086#1076
        end
        object Button22: TButton
          Left = 640
          Top = 125
          Width = 311
          Height = 25
          Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1089#1087#1080#1089#1086#1082
          TabOrder = 2
          OnClick = Button22Click
        end
        object ComboBox11: TComboBox
          Left = 381
          Top = 0
          Width = 237
          Height = 24
          TabOrder = 3
          Text = #1043#1088#1091#1087#1087#1072
          OnDropDown = ComboBox11DropDown
        end
        object ComboBox12: TComboBox
          Left = 381
          Top = 30
          Width = 237
          Height = 24
          TabOrder = 4
          Text = #1050#1091#1088#1089
          OnDropDown = ComboBox12DropDown
        end
        object ComboBox13: TComboBox
          Left = 381
          Top = 120
          Width = 237
          Height = 24
          TabOrder = 5
          Text = #1057#1077#1084#1077#1089#1090#1088
          Visible = False
        end
        object Edit21: TEdit
          Left = 381
          Top = 60
          Width = 237
          Height = 24
          TabOrder = 6
          Text = #1053#1077#1076#1077#1083#1103
        end
        object DateTimePicker4: TDateTimePicker
          Left = 0
          Top = 64
          Width = 362
          Height = 24
          BevelInner = bvNone
          Date = 45316.702427465280000000
          Time = 45316.702427465280000000
          DateFormat = dfLong
          DoubleBuffered = False
          ParentDoubleBuffered = False
          ParentShowHint = False
          ShowHint = False
          TabOrder = 7
        end
        object ListBox1: TListBox
          Left = 640
          Top = 22
          Width = 311
          Height = 97
          TabOrder = 8
        end
      end
    end
    object TabSheet5: TTabSheet
      Caption = #1055#1086#1080#1089#1082' '#1087#1086' '#1056#1072#1089#1087#1080#1089#1072#1085#1080#1102
      ImageIndex = 4
      DesignSize = (
        1223
        658)
      object PageControl2: TPageControl
        Left = 1
        Top = -42
        Width = 1222
        Height = 700
        ActivePage = TabSheet8
        Anchors = [akLeft, akTop, akRight, akBottom]
        TabOrder = 0
        object TabSheet8: TTabSheet
          Caption = #1056#1072#1089#1087#1080#1089#1072#1085#1080#1077
          ImageIndex = 2
          ExplicitLeft = 0
          ExplicitTop = 0
          ExplicitWidth = 0
          ExplicitHeight = 0
          DesignSize = (
            1214
            669)
          object SpeedButton25: TSpeedButton
            Left = 3
            Top = 83
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object SpeedButton26: TSpeedButton
            Left = 3
            Top = 163
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object SpeedButton27: TSpeedButton
            Left = 3
            Top = 247
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object SpeedButton28: TSpeedButton
            Left = 3
            Top = 331
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object SpeedButton29: TSpeedButton
            Left = 3
            Top = 415
            Width = 130
            Height = 78
            Caption = '1 '#1087#1072#1088#1072' \n '
          end
          object StringGrid2: TStringGrid
            Left = 137
            Top = 112
            Width = 1062
            Height = 409
            ColCount = 7
            DefaultColWidth = 150
            DefaultRowHeight = 80
            FixedCols = 0
            FixedRows = 0
            TabOrder = 0
          end
          object PageControl3: TPageControl
            Left = -8
            Top = -31
            Width = 1222
            Height = 700
            Anchors = [akLeft, akTop, akRight, akBottom]
            TabOrder = 1
          end
          object PageControl4: TPageControl
            Left = -8
            Top = -31
            Width = 1222
            Height = 700
            ActivePage = TabSheet15
            Anchors = [akLeft, akTop, akRight, akBottom]
            TabOrder = 2
            object TabSheet15: TTabSheet
              Caption = #1055#1086#1080#1089#1082' '#1087#1086' '#1056#1072#1089#1087#1080#1089#1072#1085#1080#1102
              ImageIndex = 4
              ExplicitLeft = -52
              ExplicitTop = 19
              object Label39: TLabel
                Left = 3
                Top = 74
                Width = 111
                Height = 16
                Caption = #1055#1088#1077#1087#1086#1076#1086#1074#1072#1090#1077#1083#1100':'
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -13
                Font.Name = 'Tahoma'
                Font.Style = [fsBold, fsUnderline]
                ParentFont = False
              end
              object Label46: TLabel
                Left = 241
                Top = 74
                Width = 52
                Height = 16
                Caption = #1043#1088#1091#1087#1087#1072':'
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -13
                Font.Name = 'Tahoma'
                Font.Style = [fsBold, fsUnderline]
                ParentFont = False
              end
              object Label47: TLabel
                Left = 503
                Top = 74
                Width = 56
                Height = 16
                Caption = #1053#1077#1076#1077#1083#1103':'
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -13
                Font.Name = 'Tahoma'
                Font.Style = [fsBold, fsUnderline]
                ParentFont = False
              end
              object Label48: TLabel
                Left = 352
                Top = 74
                Width = 36
                Height = 16
                Caption = #1050#1091#1088#1089':'
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -13
                Font.Name = 'Tahoma'
                Font.Style = [fsBold, fsUnderline]
                ParentFont = False
              end
              object Label51: TLabel
                Left = 872
                Top = 2
                Width = 180
                Height = 16
                Caption = #1057#1087#1080#1089#1086#1082' '#1055#1091#1089#1090#1099#1093' '#1040#1091#1076#1080#1090#1086#1088#1080#1081':'
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -13
                Font.Name = 'Tahoma'
                Font.Style = [fsBold, fsUnderline]
                ParentFont = False
              end
              object Label52: TLabel
                Left = 3
                Top = 3
                Width = 654
                Height = 16
                Caption = 
                  #1054#1073#1097#1080#1081' '#1087#1086#1080#1089#1082' '#1087#1088#1077#1076#1086#1089#1090#1072#1074#1083#1103#1077#1090' '#1074#1086#1079#1084#1086#1078#1085#1086#1089#1090#1100' '#1087#1086#1080#1089#1082#1072' '#1074#1089#1077#1093' '#1074#1086#1079#1084#1086#1078#1085#1099#1093' '#1087#1086#1083#1077 +
                  #1081' '#1087#1088#1080#1074#1077#1076#1077#1085#1085#1099#1093' '#1085#1080#1078#1077'. '#1055#1086' '#1091#1084#1086#1083#1095#1072#1085#1080#1102', '
              end
              object Label53: TLabel
                Left = 3
                Top = 17
                Width = 651
                Height = 16
                Caption = 
                  #1077#1089#1083#1080' '#1085#1077' '#1074#1099#1073#1088#1072#1085#1099' '#1087#1086#1083#1103' '#1044#1040#1058#1040', '#1053#1045#1044#1045#1051#1071', '#1059#1063#1045#1041#1053#1067#1049' '#1043#1054#1044', '#1090#1086' '#1074#1099#1073#1080#1088#1072#1077#1090#1089#1103' '#1087#1086 +
                  #1089#1083#1077#1076#1085#1103#1103' '#1080#1084#1077#1102#1097#1072#1103' '#1085#1077#1076#1077#1083#1103', '#1090#1077#1082#1091#1097#1077#1075#1086
              end
              object Label54: TLabel
                Left = 3
                Top = 31
                Width = 644
                Height = 16
                Caption = 
                  #1075#1086#1076#1072'. '#1055#1088#1080#1084#1077#1095#1072#1085#1080#1077': '#1044#1083#1103' '#1087#1086#1080#1089#1082#1072' '#1072#1091#1076#1080#1090#1086#1088#1080#1081' '#1085#1091#1078#1085#1086' '#1074#1099#1073#1088#1072#1090#1100' '#1087#1072#1088#1091', '#1086#1087#1103#1090#1100 +
                  ' '#1078#1077' '#1087#1086' '#1091#1084#1086#1083#1095#1072#1085#1080#1102', '#1087#1086#1089#1083#1077#1076#1085#1103#1103' '#1085#1077#1076#1077#1083#1103' '
              end
              object Label55: TLabel
                Left = 3
                Top = 52
                Width = 4
                Height = 16
              end
              object Label56: TLabel
                Left = 3
                Top = 45
                Width = 627
                Height = 16
                Caption = 
                  #1090#1077#1082#1097#1077#1075#1086' '#1075#1086#1076#1072'. '#1040' '#1076#1083#1103' '#1074#1099#1074#1086#1076#1072' '#1087#1091#1089#1090#1099#1093' '#1072#1091#1076#1080#1090#1086#1088#1080#1081' '#1076#1083#1103' '#1076#1072#1085#1085#1086#1081' '#1087#1072#1088#1099', '#1085#1077#1086 +
                  #1073#1093#1086#1076#1080#1084#1086' '#1085#1072#1078#1072#1090#1100' '#1087#1086#1089#1083#1077#1076#1085#1102#1102' '#1082#1085#1086#1087#1082#1091'.'
              end
              object Label1: TLabel
                Left = 640
                Top = 74
                Width = 38
                Height = 16
                Caption = #1044#1072#1090#1072':'
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -13
                Font.Name = 'Tahoma'
                Font.Style = [fsBold, fsUnderline]
                ParentFont = False
              end
              object DBGrid3: TDBGrid
                Left = 5
                Top = 133
                Width = 1206
                Height = 540
                DataSource = DataSource2
                ReadOnly = True
                TabOrder = 0
                TitleFont.Charset = DEFAULT_CHARSET
                TitleFont.Color = clWindowText
                TitleFont.Height = -13
                TitleFont.Name = 'Tahoma'
                TitleFont.Style = []
                Columns = <
                  item
                    Alignment = taCenter
                    Expanded = False
                    FieldName = 'data'
                    Title.Alignment = taCenter
                    Title.Caption = #1044#1072#1090#1072
                    Title.Font.Charset = DEFAULT_CHARSET
                    Title.Font.Color = clWindowText
                    Title.Font.Height = -13
                    Title.Font.Name = 'Tahoma'
                    Title.Font.Style = [fsBold, fsUnderline]
                    Width = 90
                    Visible = True
                  end
                  item
                    Expanded = False
                    FieldName = 'week_day'
                    Title.Alignment = taCenter
                    Title.Caption = #1044#1077#1085#1100' '#1085#1077#1076#1077#1083#1080
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
                    FieldName = 'para'
                    Title.Alignment = taCenter
                    Title.Caption = #1055#1072#1088#1072
                    Title.Font.Charset = DEFAULT_CHARSET
                    Title.Font.Color = clWindowText
                    Title.Font.Height = -13
                    Title.Font.Name = 'Tahoma'
                    Title.Font.Style = [fsBold, fsUnderline]
                    Visible = True
                  end
                  item
                    Expanded = False
                    FieldName = 'Name'
                    Title.Alignment = taCenter
                    Title.Caption = #1055#1088#1077#1087#1086#1076#1086#1074#1072#1090#1077#1083#1100
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
                    FieldName = 'subjects'
                    Title.Alignment = taCenter
                    Title.Caption = #1055#1088#1077#1076#1084#1077#1090
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
                    FieldName = 'tipe'
                    Title.Alignment = taCenter
                    Title.Caption = #1058#1080#1087' '#1079#1072#1085#1103#1090#1080#1103
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
                    FieldName = 'Name_2'
                    Title.Alignment = taCenter
                    Title.Caption = #1043#1088#1091#1087#1087#1072
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
                    FieldName = 'cours'
                    Title.Alignment = taCenter
                    Title.Caption = #1050#1091#1088#1089
                    Title.Font.Charset = DEFAULT_CHARSET
                    Title.Font.Color = clWindowText
                    Title.Font.Height = -13
                    Title.Font.Name = 'Tahoma'
                    Title.Font.Style = [fsBold, fsUnderline]
                    Width = 40
                    Visible = True
                  end
                  item
                    Alignment = taCenter
                    Expanded = False
                    FieldName = 'room'
                    Title.Alignment = taCenter
                    Title.Caption = #1050#1072#1073#1080#1085#1077#1090
                    Title.Font.Charset = DEFAULT_CHARSET
                    Title.Font.Color = clWindowText
                    Title.Font.Height = -13
                    Title.Font.Name = 'Tahoma'
                    Title.Font.Style = [fsBold, fsUnderline]
                    Width = 60
                    Visible = True
                  end
                  item
                    Alignment = taCenter
                    Expanded = False
                    FieldName = 'week'
                    Title.Caption = #1053#1077#1076#1077#1083#1103
                    Title.Font.Charset = DEFAULT_CHARSET
                    Title.Font.Color = clWindowText
                    Title.Font.Height = -13
                    Title.Font.Name = 'Tahoma'
                    Title.Font.Style = [fsBold, fsUnderline]
                    Width = 55
                    Visible = True
                  end
                  item
                    Alignment = taCenter
                    Expanded = False
                    FieldName = 'year'
                    Title.Alignment = taCenter
                    Title.Caption = #1059#1095'.'#1043#1086#1076
                    Title.Font.Charset = DEFAULT_CHARSET
                    Title.Font.Color = clWindowText
                    Title.Font.Height = -13
                    Title.Font.Name = 'Tahoma'
                    Title.Font.Style = [fsBold, fsUnderline]
                    Visible = True
                  end
                  item
                    Expanded = False
                    FieldName = 'First_name'
                    Visible = True
                  end
                  item
                    Expanded = False
                    FieldName = 'Last_name'
                    Visible = True
                  end
                  item
                    Expanded = False
                    FieldName = 'Name_1'
                    Visible = True
                  end
                  item
                    Expanded = False
                    FieldName = 'cours'
                    Visible = True
                  end>
              end
              object ComboBox21: TComboBox
                Left = 3
                Top = 96
                Width = 232
                Height = 24
                TabOrder = 1
                Text = #1055#1088#1077#1087#1086#1076
              end
              object ComboBox23: TComboBox
                Left = 241
                Top = 96
                Width = 105
                Height = 24
                TabOrder = 2
                Text = #1043#1088#1091#1087#1087#1072
              end
              object ComboBox26: TComboBox
                Left = 352
                Top = 96
                Width = 145
                Height = 24
                TabOrder = 3
                Text = #1050#1091#1088#1089
                Items.Strings = (
                  '1'
                  '2'
                  '3'
                  '4')
              end
              object Button30: TButton
                Left = 775
                Top = 90
                Width = 194
                Height = 37
                Caption = #1054#1073#1097#1080#1081' '#1087#1086#1080#1089#1082
                TabOrder = 4
                OnClick = Button30Click
              end
              object DateTimePicker7: TDateTimePicker
                Left = 640
                Top = 96
                Width = 129
                Height = 24
                Date = 45326.895644085650000000
                Time = 45326.895644085650000000
                TabOrder = 5
              end
              object Button32: TButton
                Left = 975
                Top = 92
                Width = 186
                Height = 33
                Caption = #1054#1090#1095#1077#1090
                TabOrder = 6
                OnClick = Button32Click
              end
              object ComboBox29: TComboBox
                Left = 704
                Top = 33
                Width = 145
                Height = 24
                TabOrder = 7
                Text = #1075#1086#1076
                Visible = False
              end
              object ComboBox30: TComboBox
                Left = 704
                Top = 8
                Width = 145
                Height = 24
                TabOrder = 8
                Text = #1085#1077#1076#1077#1083#1103
                Visible = False
              end
              object Edit1: TEdit
                Left = 503
                Top = 96
                Width = 121
                Height = 24
                TabOrder = 9
                Text = 'Edit1'
              end
            end
          end
        end
        object TabSheet13: TTabSheet
          Caption = #1055#1086#1080#1089#1082' '#1087#1086' '#1056#1072#1089#1087#1080#1089#1072#1085#1080#1102
          ImageIndex = 4
          ExplicitLeft = 0
          ExplicitTop = 0
          ExplicitWidth = 0
          ExplicitHeight = 0
          object Label34: TLabel
            Left = 161
            Top = 74
            Width = 111
            Height = 16
            Caption = #1055#1088#1077#1087#1086#1076#1086#1074#1072#1090#1077#1083#1100':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label35: TLabel
            Left = 408
            Top = 74
            Width = 52
            Height = 16
            Caption = #1043#1088#1091#1087#1087#1072':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label36: TLabel
            Left = 528
            Top = 74
            Width = 38
            Height = 16
            Caption = #1044#1072#1090#1072':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label37: TLabel
            Left = 3
            Top = 130
            Width = 36
            Height = 16
            Caption = #1050#1091#1088#1089':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label38: TLabel
            Left = 161
            Top = 130
            Width = 59
            Height = 16
            Caption = #1050#1072#1073#1080#1085#1077#1090':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label40: TLabel
            Left = 872
            Top = 2
            Width = 180
            Height = 16
            Caption = #1057#1087#1080#1089#1086#1082' '#1055#1091#1089#1090#1099#1093' '#1040#1091#1076#1080#1090#1086#1088#1080#1081':'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = [fsBold, fsUnderline]
            ParentFont = False
          end
          object Label41: TLabel
            Left = 3
            Top = 3
            Width = 654
            Height = 16
            Caption = 
              #1054#1073#1097#1080#1081' '#1087#1086#1080#1089#1082' '#1087#1088#1077#1076#1086#1089#1090#1072#1074#1083#1103#1077#1090' '#1074#1086#1079#1084#1086#1078#1085#1086#1089#1090#1100' '#1087#1086#1080#1089#1082#1072' '#1074#1089#1077#1093' '#1074#1086#1079#1084#1086#1078#1085#1099#1093' '#1087#1086#1083#1077 +
              #1081' '#1087#1088#1080#1074#1077#1076#1077#1085#1085#1099#1093' '#1085#1080#1078#1077'. '#1055#1086' '#1091#1084#1086#1083#1095#1072#1085#1080#1102', '
          end
          object Label42: TLabel
            Left = 3
            Top = 17
            Width = 651
            Height = 16
            Caption = 
              #1077#1089#1083#1080' '#1085#1077' '#1074#1099#1073#1088#1072#1085#1099' '#1087#1086#1083#1103' '#1044#1040#1058#1040', '#1053#1045#1044#1045#1051#1071', '#1059#1063#1045#1041#1053#1067#1049' '#1043#1054#1044', '#1090#1086' '#1074#1099#1073#1080#1088#1072#1077#1090#1089#1103' '#1087#1086 +
              #1089#1083#1077#1076#1085#1103#1103' '#1080#1084#1077#1102#1097#1072#1103' '#1085#1077#1076#1077#1083#1103', '#1090#1077#1082#1091#1097#1077#1075#1086
          end
          object Label43: TLabel
            Left = 3
            Top = 31
            Width = 644
            Height = 16
            Caption = 
              #1075#1086#1076#1072'. '#1055#1088#1080#1084#1077#1095#1072#1085#1080#1077': '#1044#1083#1103' '#1087#1086#1080#1089#1082#1072' '#1072#1091#1076#1080#1090#1086#1088#1080#1081' '#1085#1091#1078#1085#1086' '#1074#1099#1073#1088#1072#1090#1100' '#1087#1072#1088#1091', '#1086#1087#1103#1090#1100 +
              ' '#1078#1077' '#1087#1086' '#1091#1084#1086#1083#1095#1072#1085#1080#1102', '#1087#1086#1089#1083#1077#1076#1085#1103#1103' '#1085#1077#1076#1077#1083#1103' '
          end
          object Label44: TLabel
            Left = 3
            Top = 52
            Width = 4
            Height = 16
          end
          object Label45: TLabel
            Left = 3
            Top = 45
            Width = 627
            Height = 16
            Caption = 
              #1090#1077#1082#1097#1077#1075#1086' '#1075#1086#1076#1072'. '#1040' '#1076#1083#1103' '#1074#1099#1074#1086#1076#1072' '#1087#1091#1089#1090#1099#1093' '#1072#1091#1076#1080#1090#1086#1088#1080#1081' '#1076#1083#1103' '#1076#1072#1085#1085#1086#1081' '#1087#1072#1088#1099', '#1085#1077#1086 +
              #1073#1093#1086#1076#1080#1084#1086' '#1085#1072#1078#1072#1090#1100' '#1087#1086#1089#1083#1077#1076#1085#1102#1102' '#1082#1085#1086#1087#1082#1091'.'
          end
          object DBGrid2: TDBGrid
            Left = -5
            Top = 216
            Width = 1206
            Height = 457
            DataSource = DataSource1
            ReadOnly = True
            TabOrder = 0
            TitleFont.Charset = DEFAULT_CHARSET
            TitleFont.Color = clWindowText
            TitleFont.Height = -13
            TitleFont.Name = 'Tahoma'
            TitleFont.Style = []
            Columns = <
              item
                Alignment = taCenter
                Expanded = False
                FieldName = 'data'
                Title.Alignment = taCenter
                Title.Caption = #1044#1072#1090#1072
                Title.Font.Charset = DEFAULT_CHARSET
                Title.Font.Color = clWindowText
                Title.Font.Height = -13
                Title.Font.Name = 'Tahoma'
                Title.Font.Style = [fsBold, fsUnderline]
                Width = 90
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'week_day'
                Title.Alignment = taCenter
                Title.Caption = #1044#1077#1085#1100' '#1085#1077#1076#1077#1083#1080
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
                FieldName = 'para'
                Title.Alignment = taCenter
                Title.Caption = #1055#1072#1088#1072
                Title.Font.Charset = DEFAULT_CHARSET
                Title.Font.Color = clWindowText
                Title.Font.Height = -13
                Title.Font.Name = 'Tahoma'
                Title.Font.Style = [fsBold, fsUnderline]
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'Name'
                Title.Alignment = taCenter
                Title.Caption = #1055#1088#1077#1087#1086#1076#1086#1074#1072#1090#1077#1083#1100
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
                FieldName = 'Name_1'
                Title.Alignment = taCenter
                Title.Caption = #1055#1088#1077#1076#1084#1077#1090
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
                FieldName = 'tipe'
                Title.Alignment = taCenter
                Title.Caption = #1058#1080#1087' '#1079#1072#1085#1103#1090#1080#1103
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
                FieldName = 'Name_2'
                Title.Alignment = taCenter
                Title.Caption = #1043#1088#1091#1087#1087#1072
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
                FieldName = 'Cours'
                Title.Alignment = taCenter
                Title.Caption = #1050#1091#1088#1089
                Title.Font.Charset = DEFAULT_CHARSET
                Title.Font.Color = clWindowText
                Title.Font.Height = -13
                Title.Font.Name = 'Tahoma'
                Title.Font.Style = [fsBold, fsUnderline]
                Width = 40
                Visible = True
              end
              item
                Alignment = taCenter
                Expanded = False
                FieldName = 'room'
                Title.Alignment = taCenter
                Title.Caption = #1050#1072#1073#1080#1085#1077#1090
                Title.Font.Charset = DEFAULT_CHARSET
                Title.Font.Color = clWindowText
                Title.Font.Height = -13
                Title.Font.Name = 'Tahoma'
                Title.Font.Style = [fsBold, fsUnderline]
                Width = 60
                Visible = True
              end
              item
                Alignment = taCenter
                Expanded = False
                FieldName = 'week'
                Title.Caption = #1053#1077#1076#1077#1083#1103
                Title.Font.Charset = DEFAULT_CHARSET
                Title.Font.Color = clWindowText
                Title.Font.Height = -13
                Title.Font.Name = 'Tahoma'
                Title.Font.Style = [fsBold, fsUnderline]
                Width = 55
                Visible = True
              end
              item
                Alignment = taCenter
                Expanded = False
                FieldName = 'year'
                Title.Alignment = taCenter
                Title.Caption = #1059#1095'.'#1043#1086#1076
                Title.Font.Charset = DEFAULT_CHARSET
                Title.Font.Color = clWindowText
                Title.Font.Height = -13
                Title.Font.Name = 'Tahoma'
                Title.Font.Style = [fsBold, fsUnderline]
                Visible = True
              end>
          end
          object ComboBox19: TComboBox
            Left = 161
            Top = 96
            Width = 232
            Height = 24
            TabOrder = 1
            Text = #1055#1088#1077#1087#1086#1076
          end
          object ComboBox20: TComboBox
            Left = 408
            Top = 96
            Width = 105
            Height = 24
            TabOrder = 2
            Text = #1043#1088#1091#1087#1087#1072
          end
          object ComboBox22: TComboBox
            Left = 161
            Top = 152
            Width = 184
            Height = 24
            TabOrder = 3
            Text = #1050#1072#1073#1080#1085#1077#1090
          end
          object ListBox2: TListBox
            Left = 872
            Top = 24
            Width = 329
            Height = 170
            TabOrder = 4
          end
          object Button27: TButton
            Left = 672
            Top = 96
            Width = 194
            Height = 42
            Caption = #1054#1073#1097#1080#1081' '#1087#1086#1080#1089#1082
            TabOrder = 5
          end
          object Button28: TButton
            Left = 672
            Top = 144
            Width = 194
            Height = 32
            Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1089#1087#1080#1089#1086#1082' '#1087#1091#1089#1090#1099#1093' '#1072#1091#1076'.'
            TabOrder = 6
          end
          object DateTimePicker6: TDateTimePicker
            Left = 528
            Top = 96
            Width = 129
            Height = 24
            Date = 45326.895644085650000000
            Time = 45326.895644085650000000
            TabOrder = 7
          end
          object Button29: TButton
            Left = 535
            Top = 152
            Width = 122
            Height = 25
            Caption = #1054#1095#1080#1089#1090#1080#1090#1100
            TabOrder = 8
          end
          object ComboBox24: TComboBox
            Left = 704
            Top = 33
            Width = 145
            Height = 24
            TabOrder = 9
            Text = #1075#1086#1076
            Visible = False
          end
          object ComboBox25: TComboBox
            Left = 704
            Top = 8
            Width = 145
            Height = 24
            TabOrder = 10
            Text = #1085#1077#1076#1077#1083#1103
            Visible = False
          end
        end
      end
    end
  end
  object Napr: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 872
    Top = 32
  end
  object ADOQuery1: TADOQuery
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
    Left = 916
    Top = 35
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 52
    Top = 147
  end
  object ADOQuery2: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 1039
    Top = 38
  end
  object ADOQuery3: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 960
    Top = 32
  end
  object ADOQuery4: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'use Practic_work'
      
        'select Rasp.*, Kabin.room, Prepods.*, Subjects.*, Groupe.*, Spec' +
        'iality.*'
      'from Rasp'
      'inner join Kabin on Rasp.id_kabin=Kabin.id'
      'inner join Subjects on Rasp.id_pred = Subjects.id'
      'inner join Prepods on Rasp.id_prep = Prepods.id'
      'inner join Groupe on Rasp.id_gr = Groupe.id'
      'inner join Speciality on Speciality.id = Groupe.spec;'
      '')
    Left = 992
    Top = 32
  end
  object DataSource2: TDataSource
    DataSet = ADOQuery4
    Left = 32
    Top = 184
  end
  object frxReport1: TfrxReport
    Version = '5.1.5'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 45514.016831643500000000
    ReportOptions.LastChange = 45514.624867569440000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 65533
    Top = 144
    Datasets = <
      item
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      Orientation = poLandscape
      PaperWidth = 297.000000000000000000
      PaperHeight = 210.000000000000000000
      PaperSize = 9
      LeftMargin = 20.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      MirrorMargins = True
      Frame.ShadowWidth = 2.000000000000000000
      Frame.LeftLine.Style = fsDash
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Height = 98.267780000000000000
        Top = 90.708720000000000000
        Width = 1009.134510000000000000
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        RowCount = 0
        object Memo1: TfrxMemoView
          Top = 15.118120000000000000
          Width = 264.566929130000000000
          Height = 30.236240000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1043#1088#1091#1087#1087#1072': [frxDBDataset1."Name_1"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo2: TfrxMemoView
          Left = 264.567100000000000000
          Top = 15.118120000000000000
          Width = 517.795392760000000000
          Height = 30.236240000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1053#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077': [frxDBDataset1."Name_2"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo3: TfrxMemoView
          Left = 782.362710000000000000
          Top = 15.118120000000000000
          Width = 226.771653540000000000
          Height = 30.236240000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1050#1091#1088#1089': [frxDBDataset1."cours"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo9: TfrxMemoView
          Top = 45.354360000000000000
          Width = 264.567100000000000000
          Height = 52.913420000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."subjects"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo10: TfrxMemoView
          Left = 264.567100000000000000
          Top = 45.354360000000000000
          Width = 253.228346456693000000
          Height = 52.913420000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            
              '[frxDBDataset1."First_name"] [frxDBDataset1."Name"] [frxDBDatase' +
              't1."Last_name"]')
          ParentFont = False
          VAlign = vaCenter
          Formats = <
            item
            end
            item
            end
            item
            end>
        end
        object Memo11: TfrxMemoView
          Left = 517.795610000000000000
          Top = 45.354360000000000000
          Width = 264.567100000000000000
          Height = 52.913420000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            
              '[frxDBDataset1."week_day"], [frxDBDataset1."data"], [frxDBDatase' +
              't1."week"]')
          ParentFont = False
          VAlign = vaCenter
          Formats = <
            item
            end
            item
            end
            item
            end>
        end
        object Memo12: TfrxMemoView
          Left = 782.362710000000000000
          Top = 45.354360000000000000
          Width = 102.047310000000000000
          Height = 52.913420000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."para"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo13: TfrxMemoView
          Left = 884.410020000000000000
          Top = 45.354360000000000000
          Width = 124.724490000000000000
          Height = 52.913420000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."room"]')
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object Header1: TfrxHeader
        FillType = ftBrush
        Height = 49.133890000000000000
        Top = 18.897650000000000000
        Width = 1009.134510000000000000
        object Memo4: TfrxMemoView
          Width = 264.567100000000000000
          Height = 37.795300000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1055#1088#1077#1076#1084#1077#1090)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo5: TfrxMemoView
          Left = 264.567100000000000000
          Width = 253.228510000000000000
          Height = 37.795300000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1060#1048#1054' '#1055#1088#1077#1087#1086#1076#1072)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo6: TfrxMemoView
          Left = 517.795610000000000000
          Width = 264.567100000000000000
          Height = 37.795300000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            ' '#1044#1077#1085#1100' '#1085#1077#1076#1077#1083#1080', '#1044#1072#1090#1072', '#1053#1086#1084#1077#1088' '#1085#1077#1076#1077#1083#1080)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo7: TfrxMemoView
          Left = 884.410020000000000000
          Width = 124.724490000000000000
          Height = 37.795300000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1050#1072#1073#1080#1085#1077#1090)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo8: TfrxMemoView
          Left = 782.362710000000000000
          Width = 102.047310000000000000
          Height = 37.795300000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1055#1072#1088#1072)
          ParentFont = False
          VAlign = vaCenter
        end
      end
    end
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    DataSource = DataSource2
    BCDToCurrency = False
    Left = 24
    Top = 144
  end
  object ADOConnection2: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=Practic_work;Data Source=LENOVO\DAMSERV' +
      'ER'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 953
    Top = 188
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=Practic_work;Data Source=LENOVO\DAMSERV' +
      'ER'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 5
    Top = 184
  end
end
