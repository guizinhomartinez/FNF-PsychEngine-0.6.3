#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_SimpleListView
#include <haxe/ui/backend/hxwidgets/custom/SimpleListView.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_ListCtrl
#include <hx/widgets/ListCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_ListView
#include <hx/widgets/ListView.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_ListCtrlStyle
#include <wx/widgets/styles/ListCtrlStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_035f9391507ec015_10_new,"haxe.ui.backend.hxwidgets.custom.SimpleListView","new",0x6c49ab29,"haxe.ui.backend.hxwidgets.custom.SimpleListView.new","haxe/ui/backend/hxwidgets/custom/SimpleListView.hx",10,0x84847b28)
HX_LOCAL_STACK_FRAME(_hx_pos_035f9391507ec015_17_onResized,"haxe.ui.backend.hxwidgets.custom.SimpleListView","onResized",0x7a4dac1a,"haxe.ui.backend.hxwidgets.custom.SimpleListView.onResized","haxe/ui/backend/hxwidgets/custom/SimpleListView.hx",17,0x84847b28)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace custom{

void SimpleListView_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_035f9391507ec015_10_new)
HXLINE(  11)		super::__construct(parent,(((::wx::widgets::styles::ListCtrlStyle_obj::REPORT | ::wx::widgets::styles::ListCtrlStyle_obj::NO_HEADER) | ::wx::widgets::styles::ListCtrlStyle_obj::SINGLE_SEL) | style),id);
HXLINE(  12)		this->appendColumn(HX_("",00,00,00,00));
HXLINE(  13)		this->bind(::wx::widgets::EventType_obj::SIZE,this->onResized_dyn(),null());
            	}

Dynamic SimpleListView_obj::__CreateEmpty() { return new SimpleListView_obj; }

void *SimpleListView_obj::_hx_vtable = 0;

Dynamic SimpleListView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SimpleListView_obj > _hx_result = new SimpleListView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SimpleListView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3614020b) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x33eec5a0 || inClassId==(int)0x3614020b;
		}
	} else {
		if (inClassId<=(int)0x467ba226) {
			return inClassId==(int)0x40756f5a || inClassId==(int)0x467ba226;
		} else {
			return inClassId==(int)0x5d92cb6f;
		}
	}
}

void SimpleListView_obj::onResized( ::hx::widgets::Event event){
            	HX_STACKFRAME(&_hx_pos_035f9391507ec015_17_onResized)
HXDLIN(  17)		this->setColumnWidth(0,(this->get_clientSize()->width + 1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleListView_obj,onResized,(void))


::hx::ObjectPtr< SimpleListView_obj > SimpleListView_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< SimpleListView_obj > __this = new SimpleListView_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< SimpleListView_obj > SimpleListView_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	SimpleListView_obj *__this = (SimpleListView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SimpleListView_obj), true, "haxe.ui.backend.hxwidgets.custom.SimpleListView"));
	*(void **)__this = SimpleListView_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

SimpleListView_obj::SimpleListView_obj()
{
}

::hx::Val SimpleListView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"onResized") ) { return ::hx::Val( onResized_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SimpleListView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SimpleListView_obj_sStaticStorageInfo = 0;
#endif

static ::String SimpleListView_obj_sMemberFields[] = {
	HX_("onResized",91,14,1e,3b),
	::String(null()) };

::hx::Class SimpleListView_obj::__mClass;

void SimpleListView_obj::__register()
{
	SimpleListView_obj _hx_dummy;
	SimpleListView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.custom.SimpleListView",b7,e2,20,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SimpleListView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SimpleListView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SimpleListView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SimpleListView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace custom
