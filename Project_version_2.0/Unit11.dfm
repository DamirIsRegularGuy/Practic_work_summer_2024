object Form11: TForm11
  Left = 0
  Top = 0
  Caption = 'Form11'
  ClientHeight = 524
  ClientWidth = 927
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    927
    524)
  PixelsPerInch = 120
  TextHeight = 16
  object Button1: TButton
    Left = 8
    Top = 8
    Width = 121
    Height = 33
    Caption = #1055#1077#1095#1072#1090#1100
    TabOrder = 0
  end
  object Button2: TButton
    Left = 8
    Top = 47
    Width = 121
    Height = 33
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1074' PDF'
    TabOrder = 1
  end
  object Button3: TButton
    Left = 8
    Top = 86
    Width = 121
    Height = 33
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1074' TXT'
    TabOrder = 2
  end
  object Button4: TButton
    Left = 8
    Top = 125
    Width = 121
    Height = 33
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1074' CSV'
    TabOrder = 3
  end
  object frxPreview1: TfrxPreview
    Left = 135
    Top = 8
    Width = 784
    Height = 517
    OutlineVisible = False
    OutlineWidth = 120
    ThumbnailVisible = False
    Anchors = [akLeft, akTop, akRight, akBottom]
    UseReportHints = True
  end
  object frxPDFExport1: TfrxPDFExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    PrintOptimized = False
    Outline = False
    Background = False
    HTMLTags = True
    Quality = 95
    Transparency = False
    Author = 'FastReport'
    Subject = 'FastReport PDF export'
    ProtectionFlags = [ePrint, eModify, eCopy, eAnnot]
    HideToolbar = False
    HideMenubar = False
    HideWindowUI = False
    FitWindow = False
    CenterWindow = False
    PrintScaling = False
    PdfA = False
    Left = 104
    Top = 160
  end
  object SaveDialog1: TSaveDialog
    Filter = '.pdf|*.pdf*|.txt|*.txt*|.csv|*.csv*'
    Left = 104
    Top = 184
  end
  object frxCSVExport1: TfrxCSVExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    Separator = ';'
    OEMCodepage = False
    UTF8 = False
    NoSysSymbols = True
    ForcedQuotes = False
    Left = 104
    Top = 216
  end
  object frxSimpleTextExport1: TfrxSimpleTextExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    Frames = False
    EmptyLines = False
    OEMCodepage = False
    DeleteEmptyColumns = True
    Left = 104
    Top = 248
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    FieldAliases.Strings = (
      'id=id'
      'id_kabin=id_kabin'
      'data=data'
      'week=week'
      'year=year'
      'week_day=week_day'
      'id_pred=id_pred'
      'id_prep=id_prep'
      'id_gr=id_gr'
      'para=para'
      'tipe=tipe'
      'id_1=id_1'
      'room=room'
      'tipe_1=tipe_1'
      'id_2=id_2'
      'First_name=First_name'
      'Name=Name'
      'Last_name=Last_name'
      'Faculty=Faculty'
      'Kaphedra=Kaphedra'
      'Position=Position'
      'Adress=Adress'
      'Phone=Phone'
      'Email=Email'
      'id_3=id_3'
      'subjects=subjects'
      'id_4=id_4'
      'Name_1=Name_1'
      'spec=spec'
      'cours=cours')
    DataSource = Form5.DataSource2
    BCDToCurrency = False
    Left = 8
    Top = 168
  end
  object frxReport1: TfrxReport
    Version = '5.1.5'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 45524.636851319400000000
    ReportOptions.LastChange = 45524.636851319400000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 8
    Top = 224
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
      PaperWidth = 320.000000000000000000
      PaperHeight = 210.000000000000000000
      PaperSize = 256
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      object PageHeader1: TfrxPageHeader
        FillType = ftBrush
        Height = 37.795300000000000000
        Top = 18.897650000000000000
        Width = 1133.859000000000000000
        object Memo1: TfrxMemoView
          Width = 1133.859000000000000000
          Height = 37.795300000000000000
          Memo.UTF8W = (
            
              #1056#1072#1089#1087#1080#1089#1072#1085#1080#1077' '#1087#1088#1077#1087#1086#1076#1072#1074#1072#1090#1077#1083#1103': [frxDBDataset1."First_name"] [frxDBDat' +
              'aset1."Name"] [frxDBDataset1."Last_name"], '#1085#1072' [frxDBDataset1."we' +
              'ek"] '#1085#1077#1076#1077#1083#1102' [frxDBDataset1."year"] '#1091#1095#1077#1073#1085#1086#1075#1086' '#1075#1086#1076#1072'.')
          Formats = <
            item
            end
            item
            end
            item
            end
            item
            end
            item
            end>
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Height = 56.692950000000000000
        Top = 117.165430000000000000
        Width = 1133.859000000000000000
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        RowCount = 0
        object Memo2: TfrxMemoView
          Width = 207.874150000000000000
          Height = 34.015770000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."data"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset1week_day: TfrxMemoView
          Top = 18.897650000000000000
          Width = 207.874150000000000000
          Height = 37.795300000000000000
          DataField = 'week_day'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."week_day"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset1subjects: TfrxMemoView
          Left = 207.874150000000000000
          Width = 351.496290000000000000
          Height = 56.692950000000000000
          DataField = 'subjects'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
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
        object frxDBDataset1Name_1: TfrxMemoView
          Left = 559.370440000000000000
          Width = 207.874150000000000000
          Height = 34.015770000000000000
          DataField = 'Name_1'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDataset1."Name_1"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo3: TfrxMemoView
          Left = 559.370440000000000000
          Top = 15.118120000000000000
          Width = 207.874150000000000000
          Height = 41.574830000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1050#1091#1088#1089' [frxDBDataset1."cours"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo4: TfrxMemoView
          Left = 767.244590000000000000
          Width = 139.842610000000000000
          Height = 56.692950000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1053#1086#1084#1077#1088' '#1087#1072#1088#1099': [frxDBDataset1."para"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo5: TfrxMemoView
          Left = 907.087200000000000000
          Width = 117.165430000000000000
          Height = 56.692950000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1058#1080#1087' '#1047#1072#1085#1103#1090#1080#1103': [frxDBDataset1."tipe"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo6: TfrxMemoView
          Left = 1024.252630000000000000
          Width = 109.606370000000000000
          Height = 56.692950000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1040#1091#1076#1080#1090#1086#1088#1080#1103': [frxDBDataset1."room"]')
          ParentFont = False
          VAlign = vaCenter
        end
      end
    end
  end
end
