void Eff_ME42_LCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 16:28:59 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1,-0.15375,1.833333,1.1275);
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
   
   TH1F *base__155 = new TH1F("base__155","",25,1.1,1.8);
   base__155->SetMinimum(0);
   base__155->SetMaximum(1.025);
   base__155->SetLineStyle(0);
   base__155->SetMarkerStyle(20);
   base__155->GetXaxis()->SetTitle("True muon |#eta|");
   base__155->GetXaxis()->SetLabelFont(42);
   base__155->GetXaxis()->SetLabelOffset(0.007);
   base__155->GetXaxis()->SetLabelSize(0.05);
   base__155->GetXaxis()->SetTitleSize(0.06);
   base__155->GetXaxis()->SetTitleOffset(0.9);
   base__155->GetXaxis()->SetTitleFont(42);
   base__155->GetYaxis()->SetTitle("Efficiency");
   base__155->GetYaxis()->SetLabelFont(42);
   base__155->GetYaxis()->SetLabelOffset(0.007);
   base__155->GetYaxis()->SetLabelSize(0.05);
   base__155->GetYaxis()->SetTitleSize(0.06);
   base__155->GetYaxis()->SetTitleOffset(0.9);
   base__155->GetYaxis()->SetTitleFont(42);
   base__155->GetZaxis()->SetLabelFont(42);
   base__155->GetZaxis()->SetLabelOffset(0.007);
   base__155->GetZaxis()->SetLabelSize(0.05);
   base__155->GetZaxis()->SetTitleSize(0.06);
   base__155->GetZaxis()->SetTitleFont(42);
   base__155->Draw("");
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
   
   TEfficiency * den_clone443 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone443->SetConfidenceLevel(0.6826895);
   den_clone443->SetBetaAlpha(1);
   den_clone443->SetBetaBeta(1);
   den_clone443->SetWeight(1);
   den_clone443->SetStatisticOption(0);
   den_clone443->SetPosteriorMode(0);
   den_clone443->SetShortestInterval(0);
   den_clone443->SetTotalEvents(0,0);
   den_clone443->SetPassedEvents(0,0);
   den_clone443->SetTotalEvents(1,15);
   den_clone443->SetPassedEvents(1,15);
   den_clone443->SetTotalEvents(2,49);
   den_clone443->SetPassedEvents(2,45);
   den_clone443->SetTotalEvents(3,365);
   den_clone443->SetPassedEvents(3,282);
   den_clone443->SetTotalEvents(4,1528);
   den_clone443->SetPassedEvents(4,1443);
   den_clone443->SetTotalEvents(5,1998);
   den_clone443->SetPassedEvents(5,1981);
   den_clone443->SetTotalEvents(6,1867);
   den_clone443->SetPassedEvents(6,1819);
   den_clone443->SetTotalEvents(7,1882);
   den_clone443->SetPassedEvents(7,1819);
   den_clone443->SetTotalEvents(8,2038);
   den_clone443->SetPassedEvents(8,2012);
   den_clone443->SetTotalEvents(9,1957);
   den_clone443->SetPassedEvents(9,1871);
   den_clone443->SetTotalEvents(10,1907);
   den_clone443->SetPassedEvents(10,1810);
   den_clone443->SetTotalEvents(11,1928);
   den_clone443->SetPassedEvents(11,1896);
   den_clone443->SetTotalEvents(12,1994);
   den_clone443->SetPassedEvents(12,1947);
   den_clone443->SetTotalEvents(13,1910);
   den_clone443->SetPassedEvents(13,1767);
   den_clone443->SetTotalEvents(14,1837);
   den_clone443->SetPassedEvents(14,1754);
   den_clone443->SetTotalEvents(15,1967);
   den_clone443->SetPassedEvents(15,1932);
   den_clone443->SetTotalEvents(16,1864);
   den_clone443->SetPassedEvents(16,1818);
   den_clone443->SetTotalEvents(17,1753);
   den_clone443->SetPassedEvents(17,1533);
   den_clone443->SetTotalEvents(18,1982);
   den_clone443->SetPassedEvents(18,1807);
   den_clone443->SetTotalEvents(19,1802);
   den_clone443->SetPassedEvents(19,1761);
   den_clone443->SetTotalEvents(20,1925);
   den_clone443->SetPassedEvents(20,1892);
   den_clone443->SetTotalEvents(21,1900);
   den_clone443->SetPassedEvents(21,1854);
   den_clone443->SetTotalEvents(22,1946);
   den_clone443->SetPassedEvents(22,1894);
   den_clone443->SetTotalEvents(23,1858);
   den_clone443->SetPassedEvents(23,1763);
   den_clone443->SetTotalEvents(24,939);
   den_clone443->SetPassedEvents(24,741);
   den_clone443->SetTotalEvents(25,32);
   den_clone443->SetPassedEvents(25,13);
   den_clone443->SetTotalEvents(26,0);
   den_clone443->SetPassedEvents(26,0);
   den_clone443->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone443->SetLineColor(ci);
   den_clone443->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone443->SetMarkerColor(ci);
   den_clone443->SetMarkerStyle(22);
   den_clone443->Draw("same samep");
   
   TEfficiency * den_clone444 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone444->SetConfidenceLevel(0.6826895);
   den_clone444->SetBetaAlpha(1);
   den_clone444->SetBetaBeta(1);
   den_clone444->SetWeight(1);
   den_clone444->SetStatisticOption(0);
   den_clone444->SetPosteriorMode(0);
   den_clone444->SetShortestInterval(0);
   den_clone444->SetTotalEvents(0,0);
   den_clone444->SetPassedEvents(0,0);
   den_clone444->SetTotalEvents(1,12);
   den_clone444->SetPassedEvents(1,10);
   den_clone444->SetTotalEvents(2,32);
   den_clone444->SetPassedEvents(2,29);
   den_clone444->SetTotalEvents(3,360);
   den_clone444->SetPassedEvents(3,264);
   den_clone444->SetTotalEvents(4,1418);
   den_clone444->SetPassedEvents(4,1321);
   den_clone444->SetTotalEvents(5,1882);
   den_clone444->SetPassedEvents(5,1856);
   den_clone444->SetTotalEvents(6,1882);
   den_clone444->SetPassedEvents(6,1792);
   den_clone444->SetTotalEvents(7,1912);
   den_clone444->SetPassedEvents(7,1850);
   den_clone444->SetTotalEvents(8,1900);
   den_clone444->SetPassedEvents(8,1870);
   den_clone444->SetTotalEvents(9,1849);
   den_clone444->SetPassedEvents(9,1763);
   den_clone444->SetTotalEvents(10,1755);
   den_clone444->SetPassedEvents(10,1677);
   den_clone444->SetTotalEvents(11,1964);
   den_clone444->SetPassedEvents(11,1930);
   den_clone444->SetTotalEvents(12,1810);
   den_clone444->SetPassedEvents(12,1756);
   den_clone444->SetTotalEvents(13,1925);
   den_clone444->SetPassedEvents(13,1762);
   den_clone444->SetTotalEvents(14,1894);
   den_clone444->SetPassedEvents(14,1790);
   den_clone444->SetTotalEvents(15,1789);
   den_clone444->SetPassedEvents(15,1747);
   den_clone444->SetTotalEvents(16,1999);
   den_clone444->SetPassedEvents(16,1940);
   den_clone444->SetTotalEvents(17,1874);
   den_clone444->SetPassedEvents(17,1643);
   den_clone444->SetTotalEvents(18,1813);
   den_clone444->SetPassedEvents(18,1638);
   den_clone444->SetTotalEvents(19,1853);
   den_clone444->SetPassedEvents(19,1804);
   den_clone444->SetTotalEvents(20,1875);
   den_clone444->SetPassedEvents(20,1813);
   den_clone444->SetTotalEvents(21,1849);
   den_clone444->SetPassedEvents(21,1792);
   den_clone444->SetTotalEvents(22,1757);
   den_clone444->SetPassedEvents(22,1707);
   den_clone444->SetTotalEvents(23,1736);
   den_clone444->SetPassedEvents(23,1635);
   den_clone444->SetTotalEvents(24,939);
   den_clone444->SetPassedEvents(24,753);
   den_clone444->SetTotalEvents(25,34);
   den_clone444->SetPassedEvents(25,12);
   den_clone444->SetTotalEvents(26,0);
   den_clone444->SetPassedEvents(26,0);
   den_clone444->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone444->SetLineColor(ci);
   den_clone444->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone444->SetMarkerColor(ci);
   den_clone444->SetMarkerStyle(21);
   den_clone444->Draw("same samep");
   
   TEfficiency * den_clone445 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone445->SetConfidenceLevel(0.6826895);
   den_clone445->SetBetaAlpha(1);
   den_clone445->SetBetaBeta(1);
   den_clone445->SetWeight(1);
   den_clone445->SetStatisticOption(0);
   den_clone445->SetPosteriorMode(0);
   den_clone445->SetShortestInterval(0);
   den_clone445->SetTotalEvents(0,0);
   den_clone445->SetPassedEvents(0,0);
   den_clone445->SetTotalEvents(1,12);
   den_clone445->SetPassedEvents(1,10);
   den_clone445->SetTotalEvents(2,31);
   den_clone445->SetPassedEvents(2,28);
   den_clone445->SetTotalEvents(3,360);
   den_clone445->SetPassedEvents(3,260);
   den_clone445->SetTotalEvents(4,1421);
   den_clone445->SetPassedEvents(4,1318);
   den_clone445->SetTotalEvents(5,1860);
   den_clone445->SetPassedEvents(5,1834);
   den_clone445->SetTotalEvents(6,1862);
   den_clone445->SetPassedEvents(6,1773);
   den_clone445->SetTotalEvents(7,1916);
   den_clone445->SetPassedEvents(7,1858);
   den_clone445->SetTotalEvents(8,1918);
   den_clone445->SetPassedEvents(8,1886);
   den_clone445->SetTotalEvents(9,1831);
   den_clone445->SetPassedEvents(9,1744);
   den_clone445->SetTotalEvents(10,1743);
   den_clone445->SetPassedEvents(10,1668);
   den_clone445->SetTotalEvents(11,1968);
   den_clone445->SetPassedEvents(11,1933);
   den_clone445->SetTotalEvents(12,1802);
   den_clone445->SetPassedEvents(12,1750);
   den_clone445->SetTotalEvents(13,1909);
   den_clone445->SetPassedEvents(13,1745);
   den_clone445->SetTotalEvents(14,1856);
   den_clone445->SetPassedEvents(14,1756);
   den_clone445->SetTotalEvents(15,1751);
   den_clone445->SetPassedEvents(15,1712);
   den_clone445->SetTotalEvents(16,1951);
   den_clone445->SetPassedEvents(16,1892);
   den_clone445->SetTotalEvents(17,1846);
   den_clone445->SetPassedEvents(17,1621);
   den_clone445->SetTotalEvents(18,1819);
   den_clone445->SetPassedEvents(18,1644);
   den_clone445->SetTotalEvents(19,1845);
   den_clone445->SetPassedEvents(19,1798);
   den_clone445->SetTotalEvents(20,1865);
   den_clone445->SetPassedEvents(20,1806);
   den_clone445->SetTotalEvents(21,1807);
   den_clone445->SetPassedEvents(21,1752);
   den_clone445->SetTotalEvents(22,1713);
   den_clone445->SetPassedEvents(22,1663);
   den_clone445->SetTotalEvents(23,1712);
   den_clone445->SetPassedEvents(23,1614);
   den_clone445->SetTotalEvents(24,928);
   den_clone445->SetPassedEvents(24,747);
   den_clone445->SetTotalEvents(25,35);
   den_clone445->SetPassedEvents(25,13);
   den_clone445->SetTotalEvents(26,0);
   den_clone445->SetPassedEvents(26,0);
   den_clone445->SetFillColor(19);
   den_clone445->SetLineWidth(2);
   den_clone445->SetMarkerStyle(23);
   den_clone445->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME4/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"LCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
