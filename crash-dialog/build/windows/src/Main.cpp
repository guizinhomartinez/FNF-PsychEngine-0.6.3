#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_ui_HaxeUIApp
#include <haxe/ui/HaxeUIApp.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AppBase
#include <haxe/ui/backend/AppBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AppImpl
#include <haxe/ui/backend/AppImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_35_main,"Main","main",0xed0e206e,"Main.main","Main.hx",35,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_81_main,"Main","main",0xed0e206e,"Main.main","Main.hx",81,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_88_main,"Main","main",0xed0e206e,"Main.main","Main.hx",88,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_100_main,"Main","main",0xed0e206e,"Main.main","Main.hx",100,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_49_main,"Main","main",0xed0e206e,"Main.main","Main.hx",49,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_18_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",18,0x087e5c05)
static const ::String _hx_array_data_332f6459_8[] = {
	HX_("Blueballed.",d6,5e,ca,7c),HX_("This isn't spooky, this is scary!",4d,54,5b,20),HX_("Izzy Engine is D-izzy.",6d,93,8e,ea),HX_("Useless, but not for long.",7b,10,bd,8b),HX_("He's in your bed, and Izzy has crashed.",69,98,fb,aa),HX_("I think I'm dying this time.",c8,1c,0a,e2),HX_("Skill issue.",04,15,4c,dd),HX_("Tight bars. Can't say the same for the game.",17,0a,ba,c7),HX_("Totally not stolen from NotITG!",bf,ea,8d,13),HX_("And I was just about to beat it too!",cd,08,4d,e0),HX_("Almost as dead as Garcello.",eb,07,e6,a9),HX_("Please stop you aren't even making sense!",b2,e0,87,fa),HX_("You were so bad the game just crashed.",1e,40,65,05),
};

void Main_obj::__construct() { }

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07825a7d;
}

::Array< ::String > Main_obj::quotes;

void Main_obj::main(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_35_main)
HXLINE(  36)		::Array< ::String > args = ::Sys_obj::args();
HXLINE(  38)		if (::hx::IsNull( args->__get(0) )) {
HXLINE(  39)			::Sys_obj::exit(1);
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_3,::String,path,::Array< ::String >,split, ::haxe::ui::HaxeUIApp,app) HXARGC(0)
            			void _hx_run(){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::String,path) HXARGC(1)
            				void _hx_run( ::haxe::ui::events::MouseEvent _){
            					HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_81_main)
HXLINE(  81)					::Sys_obj::command(HX_("start",62,74,0b,84),::Array_obj< ::String >::__new(1)->init(0,path));
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            				void _hx_run( ::haxe::ui::events::MouseEvent _){
            					HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_88_main)
HXLINE(  90)					 ::sys::io::Process_obj::__alloc( HX_CTX ,HX_("IzzyEngine.exe",16,b7,59,ca),::Array_obj< ::String >::__new(0),null());
HXLINE(  95)					::Sys_obj::exit(0);
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            				void _hx_run( ::haxe::ui::events::MouseEvent _){
            					HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_100_main)
HXLINE( 100)					::Sys_obj::exit(0);
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_49_main)
HXLINE( 701)				 ::haxe::ui::containers::VBox c0 =  ::haxe::ui::containers::VBox_obj::__alloc( HX_CTX );
HXLINE( 900)				c0->set_width(((Float)500.));
HXLINE( 285)				 ::haxe::ui::containers::VBox rootComponent = c0;
HXLINE( 701)				 ::haxe::ui::components::Image c01 =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE( 873)				c01->set_resource(::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("assets/banner.png",73,fe,d3,c1)));
HXLINE( 305)				rootComponent->addComponent(c01);
HXLINE( 701)				 ::haxe::ui::containers::VBox c1 =  ::haxe::ui::containers::VBox_obj::__alloc( HX_CTX );
HXLINE( 900)				c1->set_percentWidth(((Float)100.));
HXDLIN( 900)				c1->set_styleString(HX_("padding: 5px;",55,3e,6f,76));
HXLINE( 701)				 ::haxe::ui::components::Label c2 =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 900)				c2->set_id(HX_("message-label",ae,8f,54,af));
HXDLIN( 900)				c2->set_percentWidth(((Float)100.));
HXDLIN( 900)				c2->set_text(HX_("Message",a7,5d,62,67));
HXLINE( 873)				c2->set_textAlign(HX_("center",d5,25,db,05));
HXLINE( 754)				c1->addComponent(c2);
HXLINE( 701)				 ::haxe::ui::components::Label c3 =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 900)				c3->set_text(HX_("Call stack:",14,bf,2b,ee));
HXLINE( 754)				c1->addComponent(c3);
HXLINE( 701)				 ::haxe::ui::containers::ScrollView c4 =  ::haxe::ui::containers::ScrollView_obj::__alloc( HX_CTX );
HXLINE( 900)				c4->set_height(((Float)200.));
HXDLIN( 900)				c4->set_percentWidth(((Float)100.));
HXDLIN( 900)				c4->set_percentContentWidth(((Float)100.));
HXLINE( 701)				 ::haxe::ui::containers::VBox c5 =  ::haxe::ui::containers::VBox_obj::__alloc( HX_CTX );
HXLINE( 900)				c5->set_percentWidth(((Float)100.));
HXDLIN( 900)				c5->set_styleString(HX_("padding: 2px;",78,9a,73,74));
HXLINE( 701)				 ::haxe::ui::components::Label c6 =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 900)				c6->set_id(HX_("call-stack-label",80,2a,cc,78));
HXDLIN( 900)				c6->set_text(HX_("Call Stack",46,ca,f0,cf));
HXLINE( 754)				c5->addComponent(c6);
HXDLIN( 754)				c4->addComponent(c5);
HXDLIN( 754)				c1->addComponent(c4);
HXLINE( 701)				 ::haxe::ui::components::Label c7 =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 900)				c7->set_id(HX_("crash-reason-label",d1,b0,40,03));
HXDLIN( 900)				c7->set_text(HX_("Crash Reason",1d,c3,2d,d7));
HXLINE( 754)				c1->addComponent(c7);
HXLINE( 701)				 ::haxe::ui::containers::Box c8 =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE( 900)				c8->set_percentWidth(((Float)100.));
HXLINE( 701)				 ::haxe::ui::components::Button c9 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 900)				c9->set_id(HX_("view-crash-dump-button",5d,03,74,32));
HXDLIN( 900)				c9->set_text(HX_("View Crash Dump",08,36,d5,e2));
HXLINE( 873)				c9->set_horizontalAlign(HX_("left",07,08,b0,47));
HXLINE( 754)				c8->addComponent(c9);
HXLINE( 701)				 ::haxe::ui::components::Button c10 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 900)				c10->set_id(HX_("restart-button",f0,a1,a1,03));
HXDLIN( 900)				c10->set_text(HX_("Restart",af,ef,f6,37));
HXLINE( 873)				c10->set_horizontalAlign(HX_("center",d5,25,db,05));
HXLINE( 754)				c8->addComponent(c10);
HXLINE( 701)				 ::haxe::ui::components::Button c11 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 900)				c11->set_id(HX_("close-button",27,11,a6,a7));
HXDLIN( 900)				c11->set_text(HX_("Close",98,87,90,db));
HXLINE( 873)				c11->set_horizontalAlign(HX_("right",dc,0b,64,e9));
HXLINE( 754)				c8->addComponent(c11);
HXDLIN( 754)				c1->addComponent(c8);
HXLINE( 305)				rootComponent->addComponent(c1);
HXLINE( 326)				rootComponent->bindingRoot = true;
HXLINE(  50)				 ::haxe::ui::core::Component mainView = rootComponent;
HXLINE(  51)				app->addComponent(mainView);
HXLINE(  53)				 ::haxe::ui::components::Label messageLabel = mainView->findComponent(HX_("message-label",ae,8f,54,af),::hx::ClassOf< ::haxe::ui::components::Label >(),null(),null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE(  54)				messageLabel->set_text((::Main_obj::quotes->__get(::Std_obj::random(::Main_obj::quotes->length)) + HX_("\nUnfortunately, Izzy Engine has crashed.",68,9b,9d,b9)));
HXLINE(  55)				messageLabel->set_percentWidth(100);
HXLINE(  56)				messageLabel->set_textAlign(HX_("center",d5,25,db,05));
HXLINE(  58)				 ::haxe::ui::components::Label callStackLabel = mainView->findComponent(HX_("call-stack-label",80,2a,cc,78),::hx::ClassOf< ::haxe::ui::components::Label >(),null(),null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE(  59)				callStackLabel->set_text(HX_("",00,00,00,00));
HXLINE(  60)				{
HXLINE(  60)					int _g = 0;
HXDLIN(  60)					int _g1 = (split->length - 4);
HXDLIN(  60)					while((_g < _g1)){
HXLINE(  60)						_g = (_g + 1);
HXDLIN(  60)						int i = (_g - 1);
HXLINE(  62)						if ((i == (split->length - 5))) {
HXLINE(  63)							::String _hx_tmp = callStackLabel->get_text();
HXDLIN(  63)							callStackLabel->set_text((_hx_tmp + split->__get(i)));
            						}
            						else {
HXLINE(  65)							::String _hx_tmp = callStackLabel->get_text();
HXDLIN(  65)							callStackLabel->set_text((_hx_tmp + (split->__get(i) + HX_("\n",0a,00,00,00))));
            						}
            					}
            				}
HXLINE(  68)				 ::haxe::ui::components::Label crashReasonLabel = mainView->findComponent(HX_("crash-reason-label",d1,b0,40,03),::hx::ClassOf< ::haxe::ui::components::Label >(),null(),null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE(  69)				crashReasonLabel->set_text(HX_("",00,00,00,00));
HXLINE(  70)				{
HXLINE(  70)					int _g2 = (split->length - 3);
HXDLIN(  70)					int _g3 = (split->length - 1);
HXDLIN(  70)					while((_g2 < _g3)){
HXLINE(  70)						_g2 = (_g2 + 1);
HXDLIN(  70)						int i = (_g2 - 1);
HXLINE(  72)						if ((i == (split->length - 2))) {
HXLINE(  73)							::String _hx_tmp = crashReasonLabel->get_text();
HXDLIN(  73)							crashReasonLabel->set_text((_hx_tmp + split->__get(i)));
            						}
            						else {
HXLINE(  75)							::String _hx_tmp = crashReasonLabel->get_text();
HXDLIN(  75)							crashReasonLabel->set_text((_hx_tmp + (split->__get(i) + HX_("\n",0a,00,00,00))));
            						}
            					}
            				}
HXLINE(  78)				mainView->findComponent(HX_("view-crash-dump-button",5d,03,74,32),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >()->set_onClick( ::Dynamic(new _hx_Closure_0(path)));
HXLINE(  87)				mainView->findComponent(HX_("restart-button",f0,a1,a1,03),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >()->set_onClick( ::Dynamic(new _hx_Closure_1()));
HXLINE(  98)				mainView->findComponent(HX_("close-button",27,11,a6,a7),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >()->set_onClick( ::Dynamic(new _hx_Closure_2()));
HXLINE( 103)				app->start();
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  42)			::String path = args->__get(0);
HXLINE(  43)			::String contents = ::sys::io::File_obj::getContent(path);
HXLINE(  44)			::Array< ::String > split = contents.split(HX_("\n",0a,00,00,00));
HXLINE(  46)			 ::haxe::ui::HaxeUIApp app =  ::haxe::ui::HaxeUIApp_obj::__alloc( HX_CTX ,null());
HXLINE(  48)			app->ready( ::Dynamic(new _hx_Closure_3(path,split,app)),null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"quotes") ) { outValue = ( quotes ); return true; }
	}
	return false;
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"quotes") ) { quotes=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Main_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Main_obj::quotes,HX_("quotes",b7,b1,ec,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::quotes,"quotes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::quotes,"quotes");
};

#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("quotes",b7,b1,ec,d5),
	HX_("main",39,38,56,48),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Main_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_18_boot)
HXDLIN(  18)		quotes = ::Array_obj< ::String >::fromData( _hx_array_data_332f6459_8,13);
            	}
}

