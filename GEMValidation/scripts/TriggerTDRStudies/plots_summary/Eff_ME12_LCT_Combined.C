void Eff_ME12_LCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  4 22:37:07 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.128571,0.42125,1.72381,1.0775);
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
   
   TH1F *base__14 = new TH1F("base__14","",25,1.2,1.7);
   base__14->SetMinimum(0.5);
   base__14->SetMaximum(1.025);
   base__14->SetLineStyle(0);
   base__14->SetMarkerStyle(20);
   base__14->GetXaxis()->SetTitle("True muon |#eta|");
   base__14->GetXaxis()->SetLabelFont(42);
   base__14->GetXaxis()->SetLabelOffset(0.007);
   base__14->GetXaxis()->SetLabelSize(0.05);
   base__14->GetXaxis()->SetTitleSize(0.06);
   base__14->GetXaxis()->SetTitleOffset(0.9);
   base__14->GetXaxis()->SetTitleFont(42);
   base__14->GetYaxis()->SetTitle("Efficiency");
   base__14->GetYaxis()->SetLabelFont(42);
   base__14->GetYaxis()->SetLabelOffset(0.007);
   base__14->GetYaxis()->SetLabelSize(0.05);
   base__14->GetYaxis()->SetTitleSize(0.06);
   base__14->GetYaxis()->SetTitleOffset(0.9);
   base__14->GetYaxis()->SetTitleFont(42);
   base__14->GetZaxis()->SetLabelFont(42);
   base__14->GetZaxis()->SetLabelOffset(0.007);
   base__14->GetZaxis()->SetLabelSize(0.05);
   base__14->GetZaxis()->SetTitleSize(0.06);
   base__14->GetZaxis()->SetTitleFont(42);
   base__14->Draw("");
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
      tex = new TLatex(0.2208,0.936,"Simulation Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TEfficiency * den_clone42 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone42->SetConfidenceLevel(0.6826895);
   den_clone42->SetBetaAlpha(1);
   den_clone42->SetBetaBeta(1);
   den_clone42->SetWeight(1);
   den_clone42->SetStatisticOption(0);
   den_clone42->SetPosteriorMode(0);
   den_clone42->SetShortestInterval(0);
   den_clone42->SetTotalEvents(0,0);
   den_clone42->SetPassedEvents(0,0);
   den_clone42->SetTotalEvents(1,820);
   den_clone42->SetPassedEvents(1,750);
   den_clone42->SetTotalEvents(2,1213);
   den_clone42->SetPassedEvents(2,1076);
   den_clone42->SetTotalEvents(3,1354);
   den_clone42->SetPassedEvents(3,1345);
   den_clone42->SetTotalEvents(4,1323);
   den_clone42->SetPassedEvents(4,1305);
   den_clone42->SetTotalEvents(5,1390);
   den_clone42->SetPassedEvents(5,1281);
   den_clone42->SetTotalEvents(6,1462);
   den_clone42->SetPassedEvents(6,1354);
   den_clone42->SetTotalEvents(7,1398);
   den_clone42->SetPassedEvents(7,1236);
   den_clone42->SetTotalEvents(8,1433);
   den_clone42->SetPassedEvents(8,1378);
   den_clone42->SetTotalEvents(9,1329);
   den_clone42->SetPassedEvents(9,1308);
   den_clone42->SetTotalEvents(10,1404);
   den_clone42->SetPassedEvents(10,1383);
   den_clone42->SetTotalEvents(11,1430);
   den_clone42->SetPassedEvents(11,1406);
   den_clone42->SetTotalEvents(12,1367);
   den_clone42->SetPassedEvents(12,1334);
   den_clone42->SetTotalEvents(13,1349);
   den_clone42->SetPassedEvents(13,1129);
   den_clone42->SetTotalEvents(14,1357);
   den_clone42->SetPassedEvents(14,1185);
   den_clone42->SetTotalEvents(15,1298);
   den_clone42->SetPassedEvents(15,1034);
   den_clone42->SetTotalEvents(16,1436);
   den_clone42->SetPassedEvents(16,1344);
   den_clone42->SetTotalEvents(17,1307);
   den_clone42->SetPassedEvents(17,1268);
   den_clone42->SetTotalEvents(18,1268);
   den_clone42->SetPassedEvents(18,1227);
   den_clone42->SetTotalEvents(19,1329);
   den_clone42->SetPassedEvents(19,1283);
   den_clone42->SetTotalEvents(20,1413);
   den_clone42->SetPassedEvents(20,1363);
   den_clone42->SetTotalEvents(21,1263);
   den_clone42->SetPassedEvents(21,1125);
   den_clone42->SetTotalEvents(22,804);
   den_clone42->SetPassedEvents(22,681);
   den_clone42->SetTotalEvents(23,621);
   den_clone42->SetPassedEvents(23,473);
   den_clone42->SetTotalEvents(24,81);
   den_clone42->SetPassedEvents(24,22);
   den_clone42->SetTotalEvents(25,0);
   den_clone42->SetPassedEvents(25,0);
   den_clone42->SetTotalEvents(26,0);
   den_clone42->SetPassedEvents(26,0);
   den_clone42->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone42->SetLineColor(ci);
   den_clone42->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone42->SetMarkerColor(ci);
   den_clone42->SetMarkerStyle(22);
   den_clone42->Draw("same samep");
   
   TEfficiency * den_clone43 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone43->SetConfidenceLevel(0.6826895);
   den_clone43->SetBetaAlpha(1);
   den_clone43->SetBetaBeta(1);
   den_clone43->SetWeight(1);
   den_clone43->SetStatisticOption(0);
   den_clone43->SetPosteriorMode(0);
   den_clone43->SetShortestInterval(0);
   den_clone43->SetTotalEvents(0,0);
   den_clone43->SetPassedEvents(0,0);
   den_clone43->SetTotalEvents(1,771);
   den_clone43->SetPassedEvents(1,691);
   den_clone43->SetTotalEvents(2,1220);
   den_clone43->SetPassedEvents(2,1076);
   den_clone43->SetTotalEvents(3,1397);
   den_clone43->SetPassedEvents(3,1358);
   den_clone43->SetTotalEvents(4,1411);
   den_clone43->SetPassedEvents(4,1380);
   den_clone43->SetTotalEvents(5,1475);
   den_clone43->SetPassedEvents(5,1360);
   den_clone43->SetTotalEvents(6,1407);
   den_clone43->SetPassedEvents(6,1291);
   den_clone43->SetTotalEvents(7,1358);
   den_clone43->SetPassedEvents(7,1228);
   den_clone43->SetTotalEvents(8,1366);
   den_clone43->SetPassedEvents(8,1296);
   den_clone43->SetTotalEvents(9,1305);
   den_clone43->SetPassedEvents(9,1275);
   den_clone43->SetTotalEvents(10,1465);
   den_clone43->SetPassedEvents(10,1423);
   den_clone43->SetTotalEvents(11,1413);
   den_clone43->SetPassedEvents(11,1371);
   den_clone43->SetTotalEvents(12,1344);
   den_clone43->SetPassedEvents(12,1289);
   den_clone43->SetTotalEvents(13,1435);
   den_clone43->SetPassedEvents(13,1180);
   den_clone43->SetTotalEvents(14,1403);
   den_clone43->SetPassedEvents(14,1208);
   den_clone43->SetTotalEvents(15,1342);
   den_clone43->SetPassedEvents(15,1079);
   den_clone43->SetTotalEvents(16,1332);
   den_clone43->SetPassedEvents(16,1251);
   den_clone43->SetTotalEvents(17,1446);
   den_clone43->SetPassedEvents(17,1390);
   den_clone43->SetTotalEvents(18,1424);
   den_clone43->SetPassedEvents(18,1366);
   den_clone43->SetTotalEvents(19,1381);
   den_clone43->SetPassedEvents(19,1324);
   den_clone43->SetTotalEvents(20,1389);
   den_clone43->SetPassedEvents(20,1318);
   den_clone43->SetTotalEvents(21,1197);
   den_clone43->SetPassedEvents(21,1057);
   den_clone43->SetTotalEvents(22,900);
   den_clone43->SetPassedEvents(22,747);
   den_clone43->SetTotalEvents(23,639);
   den_clone43->SetPassedEvents(23,475);
   den_clone43->SetTotalEvents(24,66);
   den_clone43->SetPassedEvents(24,20);
   den_clone43->SetTotalEvents(25,0);
   den_clone43->SetPassedEvents(25,0);
   den_clone43->SetTotalEvents(26,0);
   den_clone43->SetPassedEvents(26,0);
   den_clone43->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone43->SetLineColor(ci);
   den_clone43->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone43->SetMarkerColor(ci);
   den_clone43->SetMarkerStyle(21);
   den_clone43->Draw("same samep");
   
   TEfficiency * den_clone44 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone44->SetConfidenceLevel(0.6826895);
   den_clone44->SetBetaAlpha(1);
   den_clone44->SetBetaBeta(1);
   den_clone44->SetWeight(1);
   den_clone44->SetStatisticOption(0);
   den_clone44->SetPosteriorMode(0);
   den_clone44->SetShortestInterval(0);
   den_clone44->SetTotalEvents(0,0);
   den_clone44->SetPassedEvents(0,0);
   den_clone44->SetTotalEvents(1,771);
   den_clone44->SetPassedEvents(1,691);
   den_clone44->SetTotalEvents(2,1220);
   den_clone44->SetPassedEvents(2,1076);
   den_clone44->SetTotalEvents(3,1397);
   den_clone44->SetPassedEvents(3,1358);
   den_clone44->SetTotalEvents(4,1411);
   den_clone44->SetPassedEvents(4,1380);
   den_clone44->SetTotalEvents(5,1475);
   den_clone44->SetPassedEvents(5,1360);
   den_clone44->SetTotalEvents(6,1407);
   den_clone44->SetPassedEvents(6,1291);
   den_clone44->SetTotalEvents(7,1358);
   den_clone44->SetPassedEvents(7,1228);
   den_clone44->SetTotalEvents(8,1366);
   den_clone44->SetPassedEvents(8,1296);
   den_clone44->SetTotalEvents(9,1305);
   den_clone44->SetPassedEvents(9,1275);
   den_clone44->SetTotalEvents(10,1465);
   den_clone44->SetPassedEvents(10,1423);
   den_clone44->SetTotalEvents(11,1413);
   den_clone44->SetPassedEvents(11,1371);
   den_clone44->SetTotalEvents(12,1344);
   den_clone44->SetPassedEvents(12,1289);
   den_clone44->SetTotalEvents(13,1435);
   den_clone44->SetPassedEvents(13,1180);
   den_clone44->SetTotalEvents(14,1403);
   den_clone44->SetPassedEvents(14,1208);
   den_clone44->SetTotalEvents(15,1342);
   den_clone44->SetPassedEvents(15,1079);
   den_clone44->SetTotalEvents(16,1332);
   den_clone44->SetPassedEvents(16,1251);
   den_clone44->SetTotalEvents(17,1446);
   den_clone44->SetPassedEvents(17,1390);
   den_clone44->SetTotalEvents(18,1424);
   den_clone44->SetPassedEvents(18,1366);
   den_clone44->SetTotalEvents(19,1381);
   den_clone44->SetPassedEvents(19,1324);
   den_clone44->SetTotalEvents(20,1389);
   den_clone44->SetPassedEvents(20,1318);
   den_clone44->SetTotalEvents(21,1197);
   den_clone44->SetPassedEvents(21,1057);
   den_clone44->SetTotalEvents(22,900);
   den_clone44->SetPassedEvents(22,747);
   den_clone44->SetTotalEvents(23,639);
   den_clone44->SetPassedEvents(23,475);
   den_clone44->SetTotalEvents(24,66);
   den_clone44->SetPassedEvents(24,20);
   den_clone44->SetTotalEvents(25,0);
   den_clone44->SetPassedEvents(25,0);
   den_clone44->SetTotalEvents(26,0);
   den_clone44->SetPassedEvents(26,0);
   den_clone44->SetFillColor(19);
   den_clone44->SetLineWidth(2);
   den_clone44->SetMarkerStyle(23);
   den_clone44->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("den_clone","PU0      CSC Run-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU200 CSC Run-2","pl");
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
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME1/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"LCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
