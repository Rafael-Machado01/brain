import Nav from '@/components/Nav'
export default function DashboardLayout({children}) {
    return (
        <div>
            <Nav/>
            <div>{children}</div>
        </div>
    );
}