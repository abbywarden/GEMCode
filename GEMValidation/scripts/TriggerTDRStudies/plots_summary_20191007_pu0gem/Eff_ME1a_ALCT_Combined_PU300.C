void Eff_ME1a_ALCT_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 12:39:11 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(2.057143,0.42125,2.414286,1.0775);
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
   
   TH1F *base__11 = new TH1F("base__11","",25,2.1,2.4);
   base__11->SetMinimum(0.5);
   base__11->SetMaximum(1.025);
   base__11->SetLineStyle(0);
   base__11->SetMarkerStyle(20);
   base__11->GetXaxis()->SetTitle("True muon |#eta|");
   base__11->GetXaxis()->SetLabelFont(42);
   base__11->GetXaxis()->SetLabelOffset(0.007);
   base__11->GetXaxis()->SetLabelSize(0.05);
   base__11->GetXaxis()->SetTitleSize(0.06);
   base__11->GetXaxis()->SetTitleOffset(0.9);
   base__11->GetXaxis()->SetTitleFont(42);
   base__11->GetYaxis()->SetTitle("Efficiency");
   base__11->GetYaxis()->SetLabelFont(42);
   base__11->GetYaxis()->SetLabelOffset(0.007);
   base__11->GetYaxis()->SetLabelSize(0.05);
   base__11->GetYaxis()->SetTitleSize(0.06);
   base__11->GetYaxis()->SetTitleOffset(0.9);
   base__11->GetYaxis()->SetTitleFont(42);
   base__11->GetZaxis()->SetLabelFont(42);
   base__11->GetZaxis()->SetLabelOffset(0.007);
   base__11->GetZaxis()->SetLabelSize(0.05);
   base__11->GetZaxis()->SetTitleSize(0.06);
   base__11->GetZaxis()->SetTitleFont(42);
   base__11->Draw("");
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
   
   TEfficiency * den_clone39 = new TEfficiency("den_clone","",25,2.1,2.4);
   
   den_clone39->SetConfidenceLevel(0.6826895);
   den_clone39->SetBetaAlpha(1);
   den_clone39->SetBetaBeta(1);
   den_clone39->SetWeight(1);
   den_clone39->SetStatisticOption(0);
   den_clone39->SetPosteriorMode(0);
   den_clone39->SetShortestInterval(0);
   den_clone39->SetTotalEvents(0,0);
   den_clone39->SetPassedEvents(0,0);
   den_clone39->SetTotalEvents(1,533);
   den_clone39->SetPassedEvents(1,510);
   den_clone39->SetTotalEvents(2,781);
   den_clone39->SetPassedEvents(2,742);
   den_clone39->SetTotalEvents(3,835);
   den_clone39->SetPassedEvents(3,802);
   den_clone39->SetTotalEvents(4,749);
   den_clone39->SetPassedEvents(4,723);
   den_clone39->SetTotalEvents(5,811);
   den_clone39->SetPassedEvents(5,785);
   den_clone39->SetTotalEvents(6,841);
   den_clone39->SetPassedEvents(6,813);
   den_clone39->SetTotalEvents(7,848);
   den_clone39->SetPassedEvents(7,826);
   den_clone39->SetTotalEvents(8,876);
   den_clone39->SetPassedEvents(8,855);
   den_clone39->SetTotalEvents(9,842);
   den_clone39->SetPassedEvents(9,814);
   den_clone39->SetTotalEvents(10,790);
   den_clone39->SetPassedEvents(10,754);
   den_clone39->SetTotalEvents(11,811);
   den_clone39->SetPassedEvents(11,779);
   den_clone39->SetTotalEvents(12,830);
   den_clone39->SetPassedEvents(12,794);
   den_clone39->SetTotalEvents(13,795);
   den_clone39->SetPassedEvents(13,757);
   den_clone39->SetTotalEvents(14,811);
   den_clone39->SetPassedEvents(14,773);
   den_clone39->SetTotalEvents(15,862);
   den_clone39->SetPassedEvents(15,824);
   den_clone39->SetTotalEvents(16,848);
   den_clone39->SetPassedEvents(16,813);
   den_clone39->SetTotalEvents(17,824);
   den_clone39->SetPassedEvents(17,783);
   den_clone39->SetTotalEvents(18,816);
   den_clone39->SetPassedEvents(18,768);
   den_clone39->SetTotalEvents(19,859);
   den_clone39->SetPassedEvents(19,803);
   den_clone39->SetTotalEvents(20,800);
   den_clone39->SetPassedEvents(20,749);
   den_clone39->SetTotalEvents(21,807);
   den_clone39->SetPassedEvents(21,754);
   den_clone39->SetTotalEvents(22,772);
   den_clone39->SetPassedEvents(22,728);
   den_clone39->SetTotalEvents(23,833);
   den_clone39->SetPassedEvents(23,795);
   den_clone39->SetTotalEvents(24,756);
   den_clone39->SetPassedEvents(24,719);
   den_clone39->SetTotalEvents(25,840);
   den_clone39->SetPassedEvents(25,755);
   den_clone39->SetTotalEvents(26,0);
   den_clone39->SetPassedEvents(26,0);
   den_clone39->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   den_clone39->SetLineColor(ci);
   den_clone39->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   den_clone39->SetMarkerColor(ci);
   den_clone39->SetMarkerStyle(23);
   den_clone39->Draw("same samep");
   
   TEfficiency * den_clone40 = new TEfficiency("den_clone","",25,2.1,2.4);
   
   den_clone40->SetConfidenceLevel(0.6826895);
   den_clone40->SetBetaAlpha(1);
   den_clone40->SetBetaBeta(1);
   den_clone40->SetWeight(1);
   den_clone40->SetStatisticOption(0);
   den_clone40->SetPosteriorMode(0);
   den_clone40->SetShortestInterval(0);
   den_clone40->SetTotalEvents(0,0);
   den_clone40->SetPassedEvents(0,0);
   den_clone40->SetTotalEvents(1,533);
   den_clone40->SetPassedEvents(1,523);
   den_clone40->SetTotalEvents(2,781);
   den_clone40->SetPassedEvents(2,771);
   den_clone40->SetTotalEvents(3,835);
   den_clone40->SetPassedEvents(3,830);
   den_clone40->SetTotalEvents(4,749);
   den_clone40->SetPassedEvents(4,743);
   den_clone40->SetTotalEvents(5,811);
   den_clone40->SetPassedEvents(5,809);
   den_clone40->SetTotalEvents(6,841);
   den_clone40->SetPassedEvents(6,837);
   den_clone40->SetTotalEvents(7,848);
   den_clone40->SetPassedEvents(7,844);
   den_clone40->SetTotalEvents(8,876);
   den_clone40->SetPassedEvents(8,875);
   den_clone40->SetTotalEvents(9,842);
   den_clone40->SetPassedEvents(9,836);
   den_clone40->SetTotalEvents(10,790);
   den_clone40->SetPassedEvents(10,780);
   den_clone40->SetTotalEvents(11,811);
   den_clone40->SetPassedEvents(11,803);
   den_clone40->SetTotalEvents(12,830);
   den_clone40->SetPassedEvents(12,827);
   den_clone40->SetTotalEvents(13,795);
   den_clone40->SetPassedEvents(13,792);
   den_clone40->SetTotalEvents(14,811);
   den_clone40->SetPassedEvents(14,804);
   den_clone40->SetTotalEvents(15,862);
   den_clone40->SetPassedEvents(15,855);
   den_clone40->SetTotalEvents(16,848);
   den_clone40->SetPassedEvents(16,843);
   den_clone40->SetTotalEvents(17,824);
   den_clone40->SetPassedEvents(17,817);
   den_clone40->SetTotalEvents(18,816);
   den_clone40->SetPassedEvents(18,809);
   den_clone40->SetTotalEvents(19,859);
   den_clone40->SetPassedEvents(19,847);
   den_clone40->SetTotalEvents(20,800);
   den_clone40->SetPassedEvents(20,793);
   den_clone40->SetTotalEvents(21,807);
   den_clone40->SetPassedEvents(21,800);
   den_clone40->SetTotalEvents(22,772);
   den_clone40->SetPassedEvents(22,766);
   den_clone40->SetTotalEvents(23,833);
   den_clone40->SetPassedEvents(23,827);
   den_clone40->SetTotalEvents(24,756);
   den_clone40->SetPassedEvents(24,751);
   den_clone40->SetTotalEvents(25,840);
   den_clone40->SetPassedEvents(25,784);
   den_clone40->SetTotalEvents(26,0);
   den_clone40->SetPassedEvents(26,0);
   den_clone40->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   den_clone40->SetLineColor(ci);
   den_clone40->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone40->SetMarkerColor(ci);
   den_clone40->SetMarkerStyle(22);
   den_clone40->Draw("same samep");
   
   TEfficiency * den_clone41 = new TEfficiency("den_clone","",25,2.1,2.4);
   
   den_clone41->SetConfidenceLevel(0.6826895);
   den_clone41->SetBetaAlpha(1);
   den_clone41->SetBetaBeta(1);
   den_clone41->SetWeight(1);
   den_clone41->SetStatisticOption(0);
   den_clone41->SetPosteriorMode(0);
   den_clone41->SetShortestInterval(0);
   den_clone41->SetTotalEvents(0,0);
   den_clone41->SetPassedEvents(0,0);
   den_clone41->SetTotalEvents(1,533);
   den_clone41->SetPassedEvents(1,523);
   den_clone41->SetTotalEvents(2,781);
   den_clone41->SetPassedEvents(2,771);
   den_clone41->SetTotalEvents(3,835);
   den_clone41->SetPassedEvents(3,830);
   den_clone41->SetTotalEvents(4,749);
   den_clone41->SetPassedEvents(4,743);
   den_clone41->SetTotalEvents(5,811);
   den_clone41->SetPassedEvents(5,809);
   den_clone41->SetTotalEvents(6,841);
   den_clone41->SetPassedEvents(6,837);
   den_clone41->SetTotalEvents(7,848);
   den_clone41->SetPassedEvents(7,844);
   den_clone41->SetTotalEvents(8,876);
   den_clone41->SetPassedEvents(8,875);
   den_clone41->SetTotalEvents(9,842);
   den_clone41->SetPassedEvents(9,836);
   den_clone41->SetTotalEvents(10,790);
   den_clone41->SetPassedEvents(10,780);
   den_clone41->SetTotalEvents(11,811);
   den_clone41->SetPassedEvents(11,803);
   den_clone41->SetTotalEvents(12,830);
   den_clone41->SetPassedEvents(12,827);
   den_clone41->SetTotalEvents(13,795);
   den_clone41->SetPassedEvents(13,792);
   den_clone41->SetTotalEvents(14,811);
   den_clone41->SetPassedEvents(14,804);
   den_clone41->SetTotalEvents(15,862);
   den_clone41->SetPassedEvents(15,855);
   den_clone41->SetTotalEvents(16,848);
   den_clone41->SetPassedEvents(16,843);
   den_clone41->SetTotalEvents(17,824);
   den_clone41->SetPassedEvents(17,817);
   den_clone41->SetTotalEvents(18,816);
   den_clone41->SetPassedEvents(18,809);
   den_clone41->SetTotalEvents(19,859);
   den_clone41->SetPassedEvents(19,847);
   den_clone41->SetTotalEvents(20,800);
   den_clone41->SetPassedEvents(20,793);
   den_clone41->SetTotalEvents(21,807);
   den_clone41->SetPassedEvents(21,800);
   den_clone41->SetTotalEvents(22,772);
   den_clone41->SetPassedEvents(22,766);
   den_clone41->SetTotalEvents(23,833);
   den_clone41->SetPassedEvents(23,827);
   den_clone41->SetTotalEvents(24,756);
   den_clone41->SetPassedEvents(24,751);
   den_clone41->SetTotalEvents(25,840);
   den_clone41->SetPassedEvents(25,784);
   den_clone41->SetTotalEvents(26,0);
   den_clone41->SetPassedEvents(26,0);
   den_clone41->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone41->SetLineColor(ci);
   den_clone41->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone41->SetMarkerColor(ci);
   den_clone41->SetMarkerStyle(21);
   den_clone41->Draw("same samep");
   
   TEfficiency * den_clone42 = new TEfficiency("den_clone","",25,2.1,2.4);
   
   den_clone42->SetConfidenceLevel(0.6826895);
   den_clone42->SetBetaAlpha(1);
   den_clone42->SetBetaBeta(1);
   den_clone42->SetWeight(1);
   den_clone42->SetStatisticOption(0);
   den_clone42->SetPosteriorMode(0);
   den_clone42->SetShortestInterval(0);
   den_clone42->SetTotalEvents(0,0);
   den_clone42->SetPassedEvents(0,0);
   den_clone42->SetTotalEvents(1,177);
   den_clone42->SetPassedEvents(1,173);
   den_clone42->SetTotalEvents(2,278);
   den_clone42->SetPassedEvents(2,272);
   den_clone42->SetTotalEvents(3,292);
   den_clone42->SetPassedEvents(3,289);
   den_clone42->SetTotalEvents(4,276);
   den_clone42->SetPassedEvents(4,274);
   den_clone42->SetTotalEvents(5,304);
   den_clone42->SetPassedEvents(5,302);
   den_clone42->SetTotalEvents(6,276);
   den_clone42->SetPassedEvents(6,272);
   den_clone42->SetTotalEvents(7,286);
   den_clone42->SetPassedEvents(7,285);
   den_clone42->SetTotalEvents(8,294);
   den_clone42->SetPassedEvents(8,293);
   den_clone42->SetTotalEvents(9,332);
   den_clone42->SetPassedEvents(9,331);
   den_clone42->SetTotalEvents(10,313);
   den_clone42->SetPassedEvents(10,311);
   den_clone42->SetTotalEvents(11,310);
   den_clone42->SetPassedEvents(11,307);
   den_clone42->SetTotalEvents(12,258);
   den_clone42->SetPassedEvents(12,255);
   den_clone42->SetTotalEvents(13,292);
   den_clone42->SetPassedEvents(13,292);
   den_clone42->SetTotalEvents(14,292);
   den_clone42->SetPassedEvents(14,289);
   den_clone42->SetTotalEvents(15,280);
   den_clone42->SetPassedEvents(15,275);
   den_clone42->SetTotalEvents(16,309);
   den_clone42->SetPassedEvents(16,306);
   den_clone42->SetTotalEvents(17,355);
   den_clone42->SetPassedEvents(17,354);
   den_clone42->SetTotalEvents(18,288);
   den_clone42->SetPassedEvents(18,284);
   den_clone42->SetTotalEvents(19,254);
   den_clone42->SetPassedEvents(19,253);
   den_clone42->SetTotalEvents(20,311);
   den_clone42->SetPassedEvents(20,307);
   den_clone42->SetTotalEvents(21,330);
   den_clone42->SetPassedEvents(21,329);
   den_clone42->SetTotalEvents(22,316);
   den_clone42->SetPassedEvents(22,313);
   den_clone42->SetTotalEvents(23,283);
   den_clone42->SetPassedEvents(23,278);
   den_clone42->SetTotalEvents(24,298);
   den_clone42->SetPassedEvents(24,293);
   den_clone42->SetTotalEvents(25,239);
   den_clone42->SetPassedEvents(25,223);
   den_clone42->SetTotalEvents(26,0);
   den_clone42->SetPassedEvents(26,0);
   den_clone42->SetFillColor(19);
   den_clone42->SetLineWidth(2);
   den_clone42->SetMarkerStyle(24);
   den_clone42->Draw("same samep");
   
   TEfficiency * den_clone43 = new TEfficiency("den_clone","",25,2.1,2.4);
   
   den_clone43->SetConfidenceLevel(0.6826895);
   den_clone43->SetBetaAlpha(1);
   den_clone43->SetBetaBeta(1);
   den_clone43->SetWeight(1);
   den_clone43->SetStatisticOption(0);
   den_clone43->SetPosteriorMode(0);
   den_clone43->SetShortestInterval(0);
   den_clone43->SetTotalEvents(0,0);
   den_clone43->SetPassedEvents(0,0);
   den_clone43->SetTotalEvents(1,497);
   den_clone43->SetPassedEvents(1,495);
   den_clone43->SetTotalEvents(2,714);
   den_clone43->SetPassedEvents(2,704);
   den_clone43->SetTotalEvents(3,880);
   den_clone43->SetPassedEvents(3,878);
   den_clone43->SetTotalEvents(4,843);
   den_clone43->SetPassedEvents(4,843);
   den_clone43->SetTotalEvents(5,858);
   den_clone43->SetPassedEvents(5,858);
   den_clone43->SetTotalEvents(6,854);
   den_clone43->SetPassedEvents(6,854);
   den_clone43->SetTotalEvents(7,837);
   den_clone43->SetPassedEvents(7,836);
   den_clone43->SetTotalEvents(8,861);
   den_clone43->SetPassedEvents(8,861);
   den_clone43->SetTotalEvents(9,766);
   den_clone43->SetPassedEvents(9,764);
   den_clone43->SetTotalEvents(10,879);
   den_clone43->SetPassedEvents(10,879);
   den_clone43->SetTotalEvents(11,845);
   den_clone43->SetPassedEvents(11,844);
   den_clone43->SetTotalEvents(12,864);
   den_clone43->SetPassedEvents(12,862);
   den_clone43->SetTotalEvents(13,869);
   den_clone43->SetPassedEvents(13,869);
   den_clone43->SetTotalEvents(14,852);
   den_clone43->SetPassedEvents(14,851);
   den_clone43->SetTotalEvents(15,823);
   den_clone43->SetPassedEvents(15,823);
   den_clone43->SetTotalEvents(16,777);
   den_clone43->SetPassedEvents(16,777);
   den_clone43->SetTotalEvents(17,827);
   den_clone43->SetPassedEvents(17,827);
   den_clone43->SetTotalEvents(18,860);
   den_clone43->SetPassedEvents(18,860);
   den_clone43->SetTotalEvents(19,884);
   den_clone43->SetPassedEvents(19,883);
   den_clone43->SetTotalEvents(20,844);
   den_clone43->SetPassedEvents(20,844);
   den_clone43->SetTotalEvents(21,845);
   den_clone43->SetPassedEvents(21,844);
   den_clone43->SetTotalEvents(22,771);
   den_clone43->SetPassedEvents(22,771);
   den_clone43->SetTotalEvents(23,885);
   den_clone43->SetPassedEvents(23,883);
   den_clone43->SetTotalEvents(24,859);
   den_clone43->SetPassedEvents(24,853);
   den_clone43->SetTotalEvents(25,744);
   den_clone43->SetPassedEvents(25,713);
   den_clone43->SetTotalEvents(26,0);
   den_clone43->SetPassedEvents(26,0);
   den_clone43->SetFillColor(19);

   ci = TColor::GetColor("#ff00ff");
   den_clone43->SetLineColor(ci);
   den_clone43->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   den_clone43->SetMarkerColor(ci);
   den_clone43->SetMarkerStyle(24);
   den_clone43->Draw("same samep");
   
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
   entry=leg->AddEntry("den_clone","PU300 GEM-CSC","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU0 GEM-CSC","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME1/a");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
