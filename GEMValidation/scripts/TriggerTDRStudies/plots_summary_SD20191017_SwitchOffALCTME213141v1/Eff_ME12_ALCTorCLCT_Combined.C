void Eff_ME12_ALCTorCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 16:27:22 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.128571,-0.15375,1.72381,1.1275);
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
   
   TH1F *base__59 = new TH1F("base__59","",25,1.2,1.7);
   base__59->SetMinimum(0);
   base__59->SetMaximum(1.025);
   base__59->SetLineStyle(0);
   base__59->SetMarkerStyle(20);
   base__59->GetXaxis()->SetTitle("True muon |#eta|");
   base__59->GetXaxis()->SetLabelFont(42);
   base__59->GetXaxis()->SetLabelOffset(0.007);
   base__59->GetXaxis()->SetLabelSize(0.05);
   base__59->GetXaxis()->SetTitleSize(0.06);
   base__59->GetXaxis()->SetTitleOffset(0.9);
   base__59->GetXaxis()->SetTitleFont(42);
   base__59->GetYaxis()->SetTitle("Efficiency");
   base__59->GetYaxis()->SetLabelFont(42);
   base__59->GetYaxis()->SetLabelOffset(0.007);
   base__59->GetYaxis()->SetLabelSize(0.05);
   base__59->GetYaxis()->SetTitleSize(0.06);
   base__59->GetYaxis()->SetTitleOffset(0.9);
   base__59->GetYaxis()->SetTitleFont(42);
   base__59->GetZaxis()->SetLabelFont(42);
   base__59->GetZaxis()->SetLabelOffset(0.007);
   base__59->GetZaxis()->SetLabelSize(0.05);
   base__59->GetZaxis()->SetTitleSize(0.06);
   base__59->GetZaxis()->SetTitleFont(42);
   base__59->Draw("");
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
   
   TEfficiency * den_clone167 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone167->SetConfidenceLevel(0.6826895);
   den_clone167->SetBetaAlpha(1);
   den_clone167->SetBetaBeta(1);
   den_clone167->SetWeight(1);
   den_clone167->SetStatisticOption(0);
   den_clone167->SetPosteriorMode(0);
   den_clone167->SetShortestInterval(0);
   den_clone167->SetTotalEvents(0,0);
   den_clone167->SetPassedEvents(0,0);
   den_clone167->SetTotalEvents(1,820);
   den_clone167->SetPassedEvents(1,779);
   den_clone167->SetTotalEvents(2,1213);
   den_clone167->SetPassedEvents(2,1129);
   den_clone167->SetTotalEvents(3,1354);
   den_clone167->SetPassedEvents(3,1354);
   den_clone167->SetTotalEvents(4,1323);
   den_clone167->SetPassedEvents(4,1322);
   den_clone167->SetTotalEvents(5,1390);
   den_clone167->SetPassedEvents(5,1388);
   den_clone167->SetTotalEvents(6,1462);
   den_clone167->SetPassedEvents(6,1460);
   den_clone167->SetTotalEvents(7,1398);
   den_clone167->SetPassedEvents(7,1395);
   den_clone167->SetTotalEvents(8,1433);
   den_clone167->SetPassedEvents(8,1433);
   den_clone167->SetTotalEvents(9,1329);
   den_clone167->SetPassedEvents(9,1326);
   den_clone167->SetTotalEvents(10,1404);
   den_clone167->SetPassedEvents(10,1400);
   den_clone167->SetTotalEvents(11,1430);
   den_clone167->SetPassedEvents(11,1429);
   den_clone167->SetTotalEvents(12,1367);
   den_clone167->SetPassedEvents(12,1363);
   den_clone167->SetTotalEvents(13,1349);
   den_clone167->SetPassedEvents(13,1334);
   den_clone167->SetTotalEvents(14,1357);
   den_clone167->SetPassedEvents(14,1333);
   den_clone167->SetTotalEvents(15,1298);
   den_clone167->SetPassedEvents(15,1243);
   den_clone167->SetTotalEvents(16,1436);
   den_clone167->SetPassedEvents(16,1426);
   den_clone167->SetTotalEvents(17,1307);
   den_clone167->SetPassedEvents(17,1307);
   den_clone167->SetTotalEvents(18,1268);
   den_clone167->SetPassedEvents(18,1265);
   den_clone167->SetTotalEvents(19,1329);
   den_clone167->SetPassedEvents(19,1326);
   den_clone167->SetTotalEvents(20,1413);
   den_clone167->SetPassedEvents(20,1412);
   den_clone167->SetTotalEvents(21,1263);
   den_clone167->SetPassedEvents(21,1232);
   den_clone167->SetTotalEvents(22,804);
   den_clone167->SetPassedEvents(22,749);
   den_clone167->SetTotalEvents(23,621);
   den_clone167->SetPassedEvents(23,563);
   den_clone167->SetTotalEvents(24,81);
   den_clone167->SetPassedEvents(24,39);
   den_clone167->SetTotalEvents(25,0);
   den_clone167->SetPassedEvents(25,0);
   den_clone167->SetTotalEvents(26,0);
   den_clone167->SetPassedEvents(26,0);
   den_clone167->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone167->SetLineColor(ci);
   den_clone167->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone167->SetMarkerColor(ci);
   den_clone167->SetMarkerStyle(22);
   den_clone167->Draw("same samep");
   
   TEfficiency * den_clone168 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone168->SetConfidenceLevel(0.6826895);
   den_clone168->SetBetaAlpha(1);
   den_clone168->SetBetaBeta(1);
   den_clone168->SetWeight(1);
   den_clone168->SetStatisticOption(0);
   den_clone168->SetPosteriorMode(0);
   den_clone168->SetShortestInterval(0);
   den_clone168->SetTotalEvents(0,0);
   den_clone168->SetPassedEvents(0,0);
   den_clone168->SetTotalEvents(1,736);
   den_clone168->SetPassedEvents(1,700);
   den_clone168->SetTotalEvents(2,1171);
   den_clone168->SetPassedEvents(2,1096);
   den_clone168->SetTotalEvents(3,1357);
   den_clone168->SetPassedEvents(3,1353);
   den_clone168->SetTotalEvents(4,1349);
   den_clone168->SetPassedEvents(4,1348);
   den_clone168->SetTotalEvents(5,1399);
   den_clone168->SetPassedEvents(5,1398);
   den_clone168->SetTotalEvents(6,1341);
   den_clone168->SetPassedEvents(6,1340);
   den_clone168->SetTotalEvents(7,1302);
   den_clone168->SetPassedEvents(7,1302);
   den_clone168->SetTotalEvents(8,1316);
   den_clone168->SetPassedEvents(8,1315);
   den_clone168->SetTotalEvents(9,1265);
   den_clone168->SetPassedEvents(9,1264);
   den_clone168->SetTotalEvents(10,1401);
   den_clone168->SetPassedEvents(10,1396);
   den_clone168->SetTotalEvents(11,1367);
   den_clone168->SetPassedEvents(11,1361);
   den_clone168->SetTotalEvents(12,1288);
   den_clone168->SetPassedEvents(12,1282);
   den_clone168->SetTotalEvents(13,1381);
   den_clone168->SetPassedEvents(13,1362);
   den_clone168->SetTotalEvents(14,1365);
   den_clone168->SetPassedEvents(14,1341);
   den_clone168->SetTotalEvents(15,1284);
   den_clone168->SetPassedEvents(15,1226);
   den_clone168->SetTotalEvents(16,1290);
   den_clone168->SetPassedEvents(16,1280);
   den_clone168->SetTotalEvents(17,1400);
   den_clone168->SetPassedEvents(17,1395);
   den_clone168->SetTotalEvents(18,1366);
   den_clone168->SetPassedEvents(18,1360);
   den_clone168->SetTotalEvents(19,1337);
   den_clone168->SetPassedEvents(19,1332);
   den_clone168->SetTotalEvents(20,1329);
   den_clone168->SetPassedEvents(20,1324);
   den_clone168->SetTotalEvents(21,1158);
   den_clone168->SetPassedEvents(21,1120);
   den_clone168->SetTotalEvents(22,860);
   den_clone168->SetPassedEvents(22,788);
   den_clone168->SetTotalEvents(23,616);
   den_clone168->SetPassedEvents(23,547);
   den_clone168->SetTotalEvents(24,64);
   den_clone168->SetPassedEvents(24,35);
   den_clone168->SetTotalEvents(25,0);
   den_clone168->SetPassedEvents(25,0);
   den_clone168->SetTotalEvents(26,0);
   den_clone168->SetPassedEvents(26,0);
   den_clone168->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone168->SetLineColor(ci);
   den_clone168->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone168->SetMarkerColor(ci);
   den_clone168->SetMarkerStyle(21);
   den_clone168->Draw("same samep");
   
   TEfficiency * den_clone169 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone169->SetConfidenceLevel(0.6826895);
   den_clone169->SetBetaAlpha(1);
   den_clone169->SetBetaBeta(1);
   den_clone169->SetWeight(1);
   den_clone169->SetStatisticOption(0);
   den_clone169->SetPosteriorMode(0);
   den_clone169->SetShortestInterval(0);
   den_clone169->SetTotalEvents(0,0);
   den_clone169->SetPassedEvents(0,0);
   den_clone169->SetTotalEvents(1,737);
   den_clone169->SetPassedEvents(1,698);
   den_clone169->SetTotalEvents(2,1149);
   den_clone169->SetPassedEvents(2,1078);
   den_clone169->SetTotalEvents(3,1330);
   den_clone169->SetPassedEvents(3,1326);
   den_clone169->SetTotalEvents(4,1350);
   den_clone169->SetPassedEvents(4,1349);
   den_clone169->SetTotalEvents(5,1401);
   den_clone169->SetPassedEvents(5,1400);
   den_clone169->SetTotalEvents(6,1363);
   den_clone169->SetPassedEvents(6,1362);
   den_clone169->SetTotalEvents(7,1282);
   den_clone169->SetPassedEvents(7,1282);
   den_clone169->SetTotalEvents(8,1328);
   den_clone169->SetPassedEvents(8,1327);
   den_clone169->SetTotalEvents(9,1243);
   den_clone169->SetPassedEvents(9,1242);
   den_clone169->SetTotalEvents(10,1395);
   den_clone169->SetPassedEvents(10,1390);
   den_clone169->SetTotalEvents(11,1365);
   den_clone169->SetPassedEvents(11,1359);
   den_clone169->SetTotalEvents(12,1292);
   den_clone169->SetPassedEvents(12,1286);
   den_clone169->SetTotalEvents(13,1375);
   den_clone169->SetPassedEvents(13,1356);
   den_clone169->SetTotalEvents(14,1327);
   den_clone169->SetPassedEvents(14,1304);
   den_clone169->SetTotalEvents(15,1274);
   den_clone169->SetPassedEvents(15,1214);
   den_clone169->SetTotalEvents(16,1254);
   den_clone169->SetPassedEvents(16,1243);
   den_clone169->SetTotalEvents(17,1360);
   den_clone169->SetPassedEvents(17,1355);
   den_clone169->SetTotalEvents(18,1362);
   den_clone169->SetPassedEvents(18,1356);
   den_clone169->SetTotalEvents(19,1317);
   den_clone169->SetPassedEvents(19,1313);
   den_clone169->SetTotalEvents(20,1316);
   den_clone169->SetPassedEvents(20,1311);
   den_clone169->SetTotalEvents(21,1161);
   den_clone169->SetPassedEvents(21,1121);
   den_clone169->SetTotalEvents(22,858);
   den_clone169->SetPassedEvents(22,784);
   den_clone169->SetTotalEvents(23,614);
   den_clone169->SetPassedEvents(23,547);
   den_clone169->SetTotalEvents(24,64);
   den_clone169->SetPassedEvents(24,35);
   den_clone169->SetTotalEvents(25,0);
   den_clone169->SetPassedEvents(25,0);
   den_clone169->SetTotalEvents(26,0);
   den_clone169->SetPassedEvents(26,0);
   den_clone169->SetFillColor(19);
   den_clone169->SetLineWidth(2);
   den_clone169->SetMarkerStyle(23);
   den_clone169->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("den_clone","PU0 CSC Run-2","pl");
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
   text = new TText(0.17,0.24,"ALCTorCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
