void Eff_ME1b_CLCT_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 16:26:50 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.514286,-0.15375,2.228571,1.1275);
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
   
   TH1F *base__37 = new TH1F("base__37","",25,1.6,2.2);
   base__37->SetMinimum(0);
   base__37->SetMaximum(1.025);
   base__37->SetLineStyle(0);
   base__37->SetMarkerStyle(20);
   base__37->GetXaxis()->SetTitle("True muon |#eta|");
   base__37->GetXaxis()->SetLabelFont(42);
   base__37->GetXaxis()->SetLabelOffset(0.007);
   base__37->GetXaxis()->SetLabelSize(0.05);
   base__37->GetXaxis()->SetTitleSize(0.06);
   base__37->GetXaxis()->SetTitleOffset(0.9);
   base__37->GetXaxis()->SetTitleFont(42);
   base__37->GetYaxis()->SetTitle("Efficiency");
   base__37->GetYaxis()->SetLabelFont(42);
   base__37->GetYaxis()->SetLabelOffset(0.007);
   base__37->GetYaxis()->SetLabelSize(0.05);
   base__37->GetYaxis()->SetTitleSize(0.06);
   base__37->GetYaxis()->SetTitleOffset(0.9);
   base__37->GetYaxis()->SetTitleFont(42);
   base__37->GetZaxis()->SetLabelFont(42);
   base__37->GetZaxis()->SetLabelOffset(0.007);
   base__37->GetZaxis()->SetLabelSize(0.05);
   base__37->GetZaxis()->SetTitleSize(0.06);
   base__37->GetZaxis()->SetTitleFont(42);
   base__37->Draw("");
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
   
   TEfficiency * den_clone105 = new TEfficiency("den_clone","",25,1.6,2.2);
   
   den_clone105->SetConfidenceLevel(0.6826895);
   den_clone105->SetBetaAlpha(1);
   den_clone105->SetBetaBeta(1);
   den_clone105->SetWeight(1);
   den_clone105->SetStatisticOption(0);
   den_clone105->SetPosteriorMode(0);
   den_clone105->SetShortestInterval(0);
   den_clone105->SetTotalEvents(0,0);
   den_clone105->SetPassedEvents(0,0);
   den_clone105->SetTotalEvents(1,1197);
   den_clone105->SetPassedEvents(1,940);
   den_clone105->SetTotalEvents(2,1646);
   den_clone105->SetPassedEvents(2,1427);
   den_clone105->SetTotalEvents(3,1589);
   den_clone105->SetPassedEvents(3,1371);
   den_clone105->SetTotalEvents(4,1699);
   den_clone105->SetPassedEvents(4,1474);
   den_clone105->SetTotalEvents(5,1494);
   den_clone105->SetPassedEvents(5,1333);
   den_clone105->SetTotalEvents(6,1577);
   den_clone105->SetPassedEvents(6,1371);
   den_clone105->SetTotalEvents(7,1588);
   den_clone105->SetPassedEvents(7,1392);
   den_clone105->SetTotalEvents(8,1471);
   den_clone105->SetPassedEvents(8,1269);
   den_clone105->SetTotalEvents(9,1577);
   den_clone105->SetPassedEvents(9,1357);
   den_clone105->SetTotalEvents(10,1672);
   den_clone105->SetPassedEvents(10,1450);
   den_clone105->SetTotalEvents(11,1604);
   den_clone105->SetPassedEvents(11,1394);
   den_clone105->SetTotalEvents(12,1517);
   den_clone105->SetPassedEvents(12,1288);
   den_clone105->SetTotalEvents(13,1643);
   den_clone105->SetPassedEvents(13,1407);
   den_clone105->SetTotalEvents(14,1634);
   den_clone105->SetPassedEvents(14,1416);
   den_clone105->SetTotalEvents(15,1587);
   den_clone105->SetPassedEvents(15,1380);
   den_clone105->SetTotalEvents(16,1594);
   den_clone105->SetPassedEvents(16,1349);
   den_clone105->SetTotalEvents(17,1607);
   den_clone105->SetPassedEvents(17,1333);
   den_clone105->SetTotalEvents(18,1575);
   den_clone105->SetPassedEvents(18,1337);
   den_clone105->SetTotalEvents(19,1572);
   den_clone105->SetPassedEvents(19,1336);
   den_clone105->SetTotalEvents(20,1555);
   den_clone105->SetPassedEvents(20,1104);
   den_clone105->SetTotalEvents(21,951);
   den_clone105->SetPassedEvents(21,697);
   den_clone105->SetTotalEvents(22,745);
   den_clone105->SetPassedEvents(22,359);
   den_clone105->SetTotalEvents(23,115);
   den_clone105->SetPassedEvents(23,5);
   den_clone105->SetTotalEvents(24,0);
   den_clone105->SetPassedEvents(24,0);
   den_clone105->SetTotalEvents(25,0);
   den_clone105->SetPassedEvents(25,0);
   den_clone105->SetTotalEvents(26,0);
   den_clone105->SetPassedEvents(26,0);
   den_clone105->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   den_clone105->SetLineColor(ci);
   den_clone105->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone105->SetMarkerColor(ci);
   den_clone105->SetMarkerStyle(23);
   den_clone105->Draw("same samep");
   
   TEfficiency * den_clone106 = new TEfficiency("den_clone","",25,1.6,2.2);
   
   den_clone106->SetConfidenceLevel(0.6826895);
   den_clone106->SetBetaAlpha(1);
   den_clone106->SetBetaBeta(1);
   den_clone106->SetWeight(1);
   den_clone106->SetStatisticOption(0);
   den_clone106->SetPosteriorMode(0);
   den_clone106->SetShortestInterval(0);
   den_clone106->SetTotalEvents(0,0);
   den_clone106->SetPassedEvents(0,0);
   den_clone106->SetTotalEvents(1,1208);
   den_clone106->SetPassedEvents(1,1086);
   den_clone106->SetTotalEvents(2,1658);
   den_clone106->SetPassedEvents(2,1627);
   den_clone106->SetTotalEvents(3,1531);
   den_clone106->SetPassedEvents(3,1508);
   den_clone106->SetTotalEvents(4,1653);
   den_clone106->SetPassedEvents(4,1625);
   den_clone106->SetTotalEvents(5,1480);
   den_clone106->SetPassedEvents(5,1461);
   den_clone106->SetTotalEvents(6,1553);
   den_clone106->SetPassedEvents(6,1519);
   den_clone106->SetTotalEvents(7,1560);
   den_clone106->SetPassedEvents(7,1517);
   den_clone106->SetTotalEvents(8,1469);
   den_clone106->SetPassedEvents(8,1436);
   den_clone106->SetTotalEvents(9,1539);
   den_clone106->SetPassedEvents(9,1502);
   den_clone106->SetTotalEvents(10,1660);
   den_clone106->SetPassedEvents(10,1609);
   den_clone106->SetTotalEvents(11,1588);
   den_clone106->SetPassedEvents(11,1555);
   den_clone106->SetTotalEvents(12,1505);
   den_clone106->SetPassedEvents(12,1467);
   den_clone106->SetTotalEvents(13,1619);
   den_clone106->SetPassedEvents(13,1581);
   den_clone106->SetTotalEvents(14,1604);
   den_clone106->SetPassedEvents(14,1566);
   den_clone106->SetTotalEvents(15,1585);
   den_clone106->SetPassedEvents(15,1535);
   den_clone106->SetTotalEvents(16,1588);
   den_clone106->SetPassedEvents(16,1539);
   den_clone106->SetTotalEvents(17,1583);
   den_clone106->SetPassedEvents(17,1518);
   den_clone106->SetTotalEvents(18,1559);
   den_clone106->SetPassedEvents(18,1497);
   den_clone106->SetTotalEvents(19,1536);
   den_clone106->SetPassedEvents(19,1471);
   den_clone106->SetTotalEvents(20,1566);
   den_clone106->SetPassedEvents(20,1240);
   den_clone106->SetTotalEvents(21,959);
   den_clone106->SetPassedEvents(21,799);
   den_clone106->SetTotalEvents(22,724);
   den_clone106->SetPassedEvents(22,393);
   den_clone106->SetTotalEvents(23,113);
   den_clone106->SetPassedEvents(23,7);
   den_clone106->SetTotalEvents(24,0);
   den_clone106->SetPassedEvents(24,0);
   den_clone106->SetTotalEvents(25,0);
   den_clone106->SetPassedEvents(25,0);
   den_clone106->SetTotalEvents(26,0);
   den_clone106->SetPassedEvents(26,0);
   den_clone106->SetFillColor(19);
   den_clone106->SetLineWidth(2);
   den_clone106->SetMarkerStyle(22);
   den_clone106->Draw("same samep");
   
   TEfficiency * den_clone107 = new TEfficiency("den_clone","",25,1.6,2.2);
   
   den_clone107->SetConfidenceLevel(0.6826895);
   den_clone107->SetBetaAlpha(1);
   den_clone107->SetBetaBeta(1);
   den_clone107->SetWeight(1);
   den_clone107->SetStatisticOption(0);
   den_clone107->SetPosteriorMode(0);
   den_clone107->SetShortestInterval(0);
   den_clone107->SetTotalEvents(0,0);
   den_clone107->SetPassedEvents(0,0);
   den_clone107->SetTotalEvents(1,1199);
   den_clone107->SetPassedEvents(1,1148);
   den_clone107->SetTotalEvents(2,1698);
   den_clone107->SetPassedEvents(2,1679);
   den_clone107->SetTotalEvents(3,1559);
   den_clone107->SetPassedEvents(3,1543);
   den_clone107->SetTotalEvents(4,1709);
   den_clone107->SetPassedEvents(4,1686);
   den_clone107->SetTotalEvents(5,1508);
   den_clone107->SetPassedEvents(5,1494);
   den_clone107->SetTotalEvents(6,1573);
   den_clone107->SetPassedEvents(6,1551);
   den_clone107->SetTotalEvents(7,1590);
   den_clone107->SetPassedEvents(7,1558);
   den_clone107->SetTotalEvents(8,1467);
   den_clone107->SetPassedEvents(8,1451);
   den_clone107->SetTotalEvents(9,1570);
   den_clone107->SetPassedEvents(9,1545);
   den_clone107->SetTotalEvents(10,1698);
   den_clone107->SetPassedEvents(10,1664);
   den_clone107->SetTotalEvents(11,1617);
   den_clone107->SetPassedEvents(11,1598);
   den_clone107->SetTotalEvents(12,1535);
   den_clone107->SetPassedEvents(12,1515);
   den_clone107->SetTotalEvents(13,1663);
   den_clone107->SetPassedEvents(13,1642);
   den_clone107->SetTotalEvents(14,1652);
   den_clone107->SetPassedEvents(14,1634);
   den_clone107->SetTotalEvents(15,1601);
   den_clone107->SetPassedEvents(15,1578);
   den_clone107->SetTotalEvents(16,1624);
   den_clone107->SetPassedEvents(16,1601);
   den_clone107->SetTotalEvents(17,1631);
   den_clone107->SetPassedEvents(17,1595);
   den_clone107->SetTotalEvents(18,1559);
   den_clone107->SetPassedEvents(18,1537);
   den_clone107->SetTotalEvents(19,1564);
   den_clone107->SetPassedEvents(19,1526);
   den_clone107->SetTotalEvents(20,1587);
   den_clone107->SetPassedEvents(20,1381);
   den_clone107->SetTotalEvents(21,975);
   den_clone107->SetPassedEvents(21,869);
   den_clone107->SetTotalEvents(22,735);
   den_clone107->SetPassedEvents(22,512);
   den_clone107->SetTotalEvents(23,116);
   den_clone107->SetPassedEvents(23,22);
   den_clone107->SetTotalEvents(24,0);
   den_clone107->SetPassedEvents(24,0);
   den_clone107->SetTotalEvents(25,0);
   den_clone107->SetPassedEvents(25,0);
   den_clone107->SetTotalEvents(26,0);
   den_clone107->SetPassedEvents(26,0);
   den_clone107->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   den_clone107->SetLineColor(ci);
   den_clone107->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   den_clone107->SetMarkerColor(ci);
   den_clone107->SetMarkerStyle(21);
   den_clone107->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME1/b");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"CLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
