import {
  Sidebar,
  SidebarContent,
  SidebarFooter,
  SidebarGroup,
  SidebarHeader,
  SidebarMenu,
} from "@/components/ui/sidebar";

export default function AppSidebar() {
  return (
    <Sidebar className="bg-rodeo-bg">
      <SidebarHeader />
      <h1 className="text-lg text-center font-bold text-rodeo-text">
        RodeoArena
      </h1>
      <SidebarContent>
        <SidebarGroup />
        <SidebarGroup />
      </SidebarContent>
      <SidebarFooter />
    </Sidebar>
  );
}
