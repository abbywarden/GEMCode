void Eff_ME41_ALCT_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 16:28:51 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.714286,-0.15375,2.428571,1.1275);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.12);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TH1F *base__141 = new TH1F("base__141","",25,1.8,2.4);
   base__141->SetMinimum(0);
   base__141->SetMaximum(1.025);
   base__141->SetLineStyle(0);
   base__141->SetMarkerStyle(20);
   base__141->GetXaxis()->SetTitle("True muon |#eta|");
   base__141->GetXaxis()->SetLabelFont(42);
   base__141->GetXaxis()->SetLabelOffset(0.007);
   base__141->GetXaxis()->SetLabelSize(0.05);
   base__141->GetXaxis()->SetTitleSize(0.06);
   base__141->GetXaxis()->SetTitleOffset(0.9);
   base__141->GetXaxis()->SetTitleFont(42);
   base__141->GetYaxis()->SetTitle("Efficiency");
   base__141->GetYaxis()->SetLabelFont(42);
   base__141->GetYaxis()->SetLabelOffset(0.007);
   base__141->GetYaxis()->SetLabelSize(0.05);
   base__141->GetYaxis()->SetTitleSize(0.06);
   base__141->GetYaxis()->SetTitleOffset(0.9);
   base__141->GetYaxis()->SetTitleFont(42);
   base__141->GetZaxis()->SetLabelFont(42);
   base__141->GetZaxis()->SetLabelOffset(0.007);
   base__141->GetZaxis()->SetLabelSize(0.05);
   base__141->GetZaxis()->SetTitleSize(0.06);
   base__141->GetZaxis()->SetTitleFont(42);
   base__141->Draw("");
   TLatex *   tex = new TLatex(0.96,0.936,"14 TeV");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.936,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2208,0.936,"Phase-2 Simulation");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TEfficiency * den_clone403 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone403->SetConfidenceLevel(0.6826895);
   den_clone403->SetBetaAlpha(1);
   den_clone403->SetBetaBeta(1);
   den_clone403->SetWeight(1);
   den_clone403->SetStatisticOption(0);
   den_clone403->SetPosteriorMode(0);
   den_clone403->SetShortestInterval(0);
   den_clone403->SetTotalEvents(0,0);
   den_clone403->SetPassedEvents(0,0);
   den_clone403->SetTotalEvents(1,401);
   den_clone403->SetPassedEvents(1,335);
   den_clone403->SetTotalEvents(2,1211);
   den_clone403->SetPassedEvents(2,1138);
   den_clone403->SetTotalEvents(3,1557);
   den_clone403->SetPassedEvents(3,1546);
   den_clone403->SetTotalEvents(4,1582);
   den_clone403->SetPassedEvents(4,1577);
   den_clone403->SetTotalEvents(5,1611);
   den_clone403->SetPassedEvents(5,1609);
   den_clone403->SetTotalEvents(6,1670);
   den_clone403->SetPassedEvents(6,1664);
   den_clone403->SetTotalEvents(7,1591);
   den_clone403->SetPassedEvents(7,1506);
   den_clone403->SetTotalEvents(8,1548);
   den_clone403->SetPassedEvents(8,1293);
   den_clone403->SetTotalEvents(9,1510);
   den_clone403->SetPassedEvents(9,1368);
   den_clone403->SetTotalEvents(10,1603);
   den_clone403->SetPassedEvents(10,1596);
   den_clone403->SetTotalEvents(11,1628);
   den_clone403->SetPassedEvents(11,1623);
   den_clone403->SetTotalEvents(12,1596);
   den_clone403->SetPassedEvents(12,1589);
   den_clone403->SetTotalEvents(13,1606);
   den_clone403->SetPassedEvents(13,1600);
   den_clone403->SetTotalEvents(14,1623);
   den_clone403->SetPassedEvents(14,1608);
   den_clone403->SetTotalEvents(15,1404);
   den_clone403->SetPassedEvents(15,1291);
   den_clone403->SetTotalEvents(16,1432);
   den_clone403->SetPassedEvents(16,1295);
   den_clone403->SetTotalEvents(17,1595);
   den_clone403->SetPassedEvents(17,1541);
   den_clone403->SetTotalEvents(18,1542);
   den_clone403->SetPassedEvents(18,1535);
   den_clone403->SetTotalEvents(19,1552);
   den_clone403->SetPassedEvents(19,1548);
   den_clone403->SetTotalEvents(20,1608);
   den_clone403->SetPassedEvents(20,1599);
   den_clone403->SetTotalEvents(21,1600);
   den_clone403->SetPassedEvents(21,1592);
   den_clone403->SetTotalEvents(22,1604);
   den_clone403->SetPassedEvents(22,1599);
   den_clone403->SetTotalEvents(23,1550);
   den_clone403->SetPassedEvents(23,1539);
   den_clone403->SetTotalEvents(24,1520);
   den_clone403->SetPassedEvents(24,1505);
   den_clone403->SetTotalEvents(25,1136);
   den_clone403->SetPassedEvents(25,1069);
   den_clone403->SetTotalEvents(26,0);
   den_clone403->SetPassedEvents(26,0);
   den_clone403->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   den_clone403->SetLineColor(ci);
   den_clone403->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone403->SetMarkerColor(ci);
   den_clone403->SetMarkerStyle(23);
   den_clone403->Draw("same samep");
   
   TEfficiency * den_clone404 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone404->SetConfidenceLevel(0.6826895);
   den_clone404->SetBetaAlpha(1);
   den_clone404->SetBetaBeta(1);
   den_clone404->SetWeight(1);
   den_clone404->SetStatisticOption(0);
   den_clone404->SetPosteriorMode(0);
   den_clone404->SetShortestInterval(0);
   den_clone404->SetTotalEvents(0,0);
   den_clone404->SetPassedEvents(0,0);
   den_clone404->SetTotalEvents(1,395);
   den_clone404->SetPassedEvents(1,328);
   den_clone404->SetTotalEvents(2,1200);
   den_clone404->SetPassedEvents(2,1130);
   den_clone404->SetTotalEvents(3,1547);
   den_clone404->SetPassedEvents(3,1535);
   den_clone404->SetTotalEvents(4,1562);
   den_clone404->SetPassedEvents(4,1556);
   den_clone404->SetTotalEvents(5,1587);
   den_clone404->SetPassedEvents(5,1584);
   den_clone404->SetTotalEvents(6,1652);
   den_clone404->SetPassedEvents(6,1645);
   den_clone404->SetTotalEvents(7,1579);
   den_clone404->SetPassedEvents(7,1488);
   den_clone404->SetTotalEvents(8,1544);
   den_clone404->SetPassedEvents(8,1291);
   den_clone404->SetTotalEvents(9,1476);
   den_clone404->SetPassedEvents(9,1330);
   den_clone404->SetTotalEvents(10,1589);
   den_clone404->SetPassedEvents(10,1582);
   den_clone404->SetTotalEvents(11,1590);
   den_clone404->SetPassedEvents(11,1585);
   den_clone404->SetTotalEvents(12,1614);
   den_clone404->SetPassedEvents(12,1610);
   den_clone404->SetTotalEvents(13,1610);
   den_clone404->SetPassedEvents(13,1603);
   den_clone404->SetTotalEvents(14,1607);
   den_clone404->SetPassedEvents(14,1594);
   den_clone404->SetTotalEvents(15,1377);
   den_clone404->SetPassedEvents(15,1262);
   den_clone404->SetTotalEvents(16,1414);
   den_clone404->SetPassedEvents(16,1274);
   den_clone404->SetTotalEvents(17,1560);
   den_clone404->SetPassedEvents(17,1507);
   den_clone404->SetTotalEvents(18,1530);
   den_clone404->SetPassedEvents(18,1527);
   den_clone404->SetTotalEvents(19,1536);
   den_clone404->SetPassedEvents(19,1532);
   den_clone404->SetTotalEvents(20,1588);
   den_clone404->SetPassedEvents(20,1579);
   den_clone404->SetTotalEvents(21,1602);
   den_clone404->SetPassedEvents(21,1594);
   den_clone404->SetTotalEvents(22,1586);
   den_clone404->SetPassedEvents(22,1579);
   den_clone404->SetTotalEvents(23,1512);
   den_clone404->SetPassedEvents(23,1501);
   den_clone404->SetTotalEvents(24,1508);
   den_clone404->SetPassedEvents(24,1497);
   den_clone404->SetTotalEvents(25,1150);
   den_clone404->SetPassedEvents(25,1087);
   den_clone404->SetTotalEvents(26,0);
   den_clone404->SetPassedEvents(26,0);
   den_clone404->SetFillColor(19);
   den_clone404->SetLineWidth(2);
   den_clone404->SetMarkerStyle(22);
   den_clone404->Draw("same samep");
   
   TEfficiency * den_clone405 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone405->SetConfidenceLevel(0.6826895);
   den_clone405->SetBetaAlpha(1);
   den_clone405->SetBetaBeta(1);
   den_clone405->SetWeight(1);
   den_clone405->SetStatisticOption(0);
   den_clone405->SetPosteriorMode(0);
   den_clone405->SetShortestInterval(0);
   den_clone405->SetTotalEvents(0,0);
   den_clone405->SetPassedEvents(0,0);
   den_clone405->SetTotalEvents(1,406);
   den_clone405->SetPassedEvents(1,339);
   den_clone405->SetTotalEvents(2,1230);
   den_clone405->SetPassedEvents(2,1157);
   den_clone405->SetTotalEvents(3,1569);
   den_clone405->SetPassedEvents(3,1557);
   den_clone405->SetTotalEvents(4,1606);
   den_clone405->SetPassedEvents(4,1600);
   den_clone405->SetTotalEvents(5,1627);
   den_clone405->SetPassedEvents(5,1624);
   den_clone405->SetTotalEvents(6,1684);
   den_clone405->SetPassedEvents(6,1677);
   den_clone405->SetTotalEvents(7,1613);
   den_clone405->SetPassedEvents(7,1525);
   den_clone405->SetTotalEvents(8,1582);
   den_clone405->SetPassedEvents(8,1322);
   den_clone405->SetTotalEvents(9,1514);
   den_clone405->SetPassedEvents(9,1367);
   den_clone405->SetTotalEvents(10,1583);
   den_clone405->SetPassedEvents(10,1575);
   den_clone405->SetTotalEvents(11,1620);
   den_clone405->SetPassedEvents(11,1616);
   den_clone405->SetTotalEvents(12,1638);
   den_clone405->SetPassedEvents(12,1634);
   den_clone405->SetTotalEvents(13,1632);
   den_clone405->SetPassedEvents(13,1624);
   den_clone405->SetTotalEvents(14,1629);
   den_clone405->SetPassedEvents(14,1614);
   den_clone405->SetTotalEvents(15,1392);
   den_clone405->SetPassedEvents(15,1274);
   den_clone405->SetTotalEvents(16,1466);
   den_clone405->SetPassedEvents(16,1318);
   den_clone405->SetTotalEvents(17,1594);
   den_clone405->SetPassedEvents(17,1540);
   den_clone405->SetTotalEvents(18,1552);
   den_clone405->SetPassedEvents(18,1549);
   den_clone405->SetTotalEvents(19,1584);
   den_clone405->SetPassedEvents(19,1581);
   den_clone405->SetTotalEvents(20,1640);
   den_clone405->SetPassedEvents(20,1631);
   den_clone405->SetTotalEvents(21,1630);
   den_clone405->SetPassedEvents(21,1622);
   den_clone405->SetTotalEvents(22,1642);
   den_clone405->SetPassedEvents(22,1635);
   den_clone405->SetTotalEvents(23,1560);
   den_clone405->SetPassedEvents(23,1548);
   den_clone405->SetTotalEvents(24,1536);
   den_clone405->SetPassedEvents(24,1524);
   den_clone405->SetTotalEvents(25,1176);
   den_clone405->SetPassedEvents(25,1109);
   den_clone405->SetTotalEvents(26,0);
   den_clone405->SetPassedEvents(26,0);
   den_clone405->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   den_clone405->SetLineColor(ci);
   den_clone405->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   den_clone405->SetMarkerColor(ci);
   den_clone405->SetMarkerStyle(21);
   den_clone405->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("den_clone","PU200 CSC Run-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU200 CSC Phase-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU200 GEM-CSC","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME4/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
