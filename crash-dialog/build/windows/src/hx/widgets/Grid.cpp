#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_9fcbfe7be8db893f
#define INCLUDED_9fcbfe7be8db893f
#include "wx/grid.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Grid
#include <hx/widgets/Grid.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Point
#include <hx/widgets/Point.h>
#endif
#ifndef INCLUDED_hx_widgets_ScrolledWindow
#include <hx/widgets/ScrolledWindow.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8cf19c2751e40a20_8_new,"hx.widgets.Grid","new",0xb0ad4215,"hx.widgets.Grid.new","hx/widgets/Grid.hx",8,0x4aa5f239)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf19c2751e40a20_18_createGrid,"hx.widgets.Grid","createGrid",0x08caf6cd,"hx.widgets.Grid.createGrid","hx/widgets/Grid.hx",18,0x4aa5f239)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf19c2751e40a20_21_setCellValue,"hx.widgets.Grid","setCellValue",0x97289218,"hx.widgets.Grid.setCellValue","hx/widgets/Grid.hx",21,0x4aa5f239)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf19c2751e40a20_27_setRowSize,"hx.widgets.Grid","setRowSize",0xa6b84764,"hx.widgets.Grid.setRowSize","hx/widgets/Grid.hx",27,0x4aa5f239)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf19c2751e40a20_31_setColSize,"hx.widgets.Grid","setColSize",0xe18df08a,"hx.widgets.Grid.setColSize","hx/widgets/Grid.hx",31,0x4aa5f239)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf19c2751e40a20_35_set_enableEditing,"hx.widgets.Grid","set_enableEditing",0x83264cad,"hx.widgets.Grid.set_enableEditing","hx/widgets/Grid.hx",35,0x4aa5f239)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf19c2751e40a20_41_set_enableGridLines,"hx.widgets.Grid","set_enableGridLines",0xfddca02e,"hx.widgets.Grid.set_enableGridLines","hx/widgets/Grid.hx",41,0x4aa5f239)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf19c2751e40a20_51_get_gridRef,"hx.widgets.Grid","get_gridRef",0x7298c8f9,"hx.widgets.Grid.get_gridRef","hx/widgets/Grid.hx",51,0x4aa5f239)
namespace hx{
namespace widgets{

void Grid_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_8cf19c2751e40a20_8_new)
HXLINE(   9)		if (::hx::IsNull( this->_ref )) {
HXLINE(  10)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxGrid()))->reinterpret();
HXLINE(  11)			 wxGrid * _hx_tmp = this->get_gridRef()->ptr;
HXDLIN(  11)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  11)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  11)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  11)			(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  14)		super::__construct(parent,id,null());
            	}

Dynamic Grid_obj::__CreateEmpty() { return new Grid_obj; }

void *Grid_obj::_hx_vtable = 0;

Dynamic Grid_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Grid_obj > _hx_result = new Grid_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Grid_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x467ba226) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0d01ed3b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0d01ed3b;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x467ba226;
		}
	} else {
		return inClassId==(int)0x5d92cb6f || inClassId==(int)0x6dcce085;
	}
}

bool Grid_obj::createGrid(int rows,int cols){
            	HX_STACKFRAME(&_hx_pos_8cf19c2751e40a20_18_createGrid)
HXDLIN(  18)		return this->get_gridRef()->ptr->CreateGrid(rows,cols,wxGrid::wxGridSelectRows);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,createGrid,return )

void Grid_obj::setCellValue(int row,int col,::String value){
            	HX_STACKFRAME(&_hx_pos_8cf19c2751e40a20_21_setCellValue)
HXLINE(  22)		const char* this1 = value.utf8_str();
HXDLIN(  22)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  23)		this->get_gridRef()->ptr->SetCellValue(row,col,s);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,setCellValue,(void))

void Grid_obj::setRowSize(int row,int height){
            	HX_STACKFRAME(&_hx_pos_8cf19c2751e40a20_27_setRowSize)
HXDLIN(  27)		this->get_gridRef()->ptr->SetRowSize(row,height);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,setRowSize,(void))

void Grid_obj::setColSize(int col,int width){
            	HX_STACKFRAME(&_hx_pos_8cf19c2751e40a20_31_setColSize)
HXDLIN(  31)		this->get_gridRef()->ptr->SetColSize(col,width);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,setColSize,(void))

bool Grid_obj::set_enableEditing(bool value){
            	HX_STACKFRAME(&_hx_pos_8cf19c2751e40a20_35_set_enableEditing)
HXLINE(  36)		this->get_gridRef()->ptr->EnableEditing(value);
HXLINE(  37)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,set_enableEditing,return )

bool Grid_obj::set_enableGridLines(bool value){
            	HX_STACKFRAME(&_hx_pos_8cf19c2751e40a20_41_set_enableGridLines)
HXLINE(  42)		this->get_gridRef()->ptr->EnableGridLines(value);
HXLINE(  43)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,set_enableGridLines,return )

::cpp::Pointer<  wxGrid > Grid_obj::get_gridRef(){
            	HX_STACKFRAME(&_hx_pos_8cf19c2751e40a20_51_get_gridRef)
HXDLIN(  51)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_gridRef,return )


::hx::ObjectPtr< Grid_obj > Grid_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< Grid_obj > __this = new Grid_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< Grid_obj > Grid_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	Grid_obj *__this = (Grid_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Grid_obj), true, "hx.widgets.Grid"));
	*(void **)__this = Grid_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

Grid_obj::Grid_obj()
{
}

void Grid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grid);
	HX_MARK_MEMBER_NAME(enableEditing,"enableEditing");
	HX_MARK_MEMBER_NAME(enableGridLines,"enableGridLines");
	HX_MARK_MEMBER_NAME(gridRef,"gridRef");
	 ::hx::widgets::ScrolledWindow_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Grid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enableEditing,"enableEditing");
	HX_VISIT_MEMBER_NAME(enableGridLines,"enableGridLines");
	HX_VISIT_MEMBER_NAME(gridRef,"gridRef");
	 ::hx::widgets::ScrolledWindow_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Grid_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gridRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_gridRef() : gridRef ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createGrid") ) { return ::hx::Val( createGrid_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRowSize") ) { return ::hx::Val( setRowSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColSize") ) { return ::hx::Val( setColSize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_gridRef") ) { return ::hx::Val( get_gridRef_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setCellValue") ) { return ::hx::Val( setCellValue_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"enableEditing") ) { return ::hx::Val( enableEditing ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enableGridLines") ) { return ::hx::Val( enableGridLines ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_enableEditing") ) { return ::hx::Val( set_enableEditing_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_enableGridLines") ) { return ::hx::Val( set_enableGridLines_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Grid_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gridRef") ) { gridRef=inValue.Cast< ::cpp::Pointer<  wxGrid > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"enableEditing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enableEditing(inValue.Cast< bool >()) );enableEditing=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enableGridLines") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enableGridLines(inValue.Cast< bool >()) );enableGridLines=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enableEditing",d5,44,c3,b7));
	outFields->push(HX_("enableGridLines",56,f2,c5,4d));
	outFields->push(HX_("gridRef",2d,ba,3c,07));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Grid_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Grid_obj,enableEditing),HX_("enableEditing",d5,44,c3,b7)},
	{::hx::fsBool,(int)offsetof(Grid_obj,enableGridLines),HX_("enableGridLines",56,f2,c5,4d)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxGrid > */ ,(int)offsetof(Grid_obj,gridRef),HX_("gridRef",2d,ba,3c,07)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Grid_obj_sStaticStorageInfo = 0;
#endif

static ::String Grid_obj_sMemberFields[] = {
	HX_("createGrid",e2,97,f9,56),
	HX_("setCellValue",6d,62,11,c7),
	HX_("setRowSize",79,e8,e6,f4),
	HX_("setColSize",9f,91,bc,2f),
	HX_("enableEditing",d5,44,c3,b7),
	HX_("set_enableEditing",38,28,a1,e1),
	HX_("enableGridLines",56,f2,c5,4d),
	HX_("set_enableGridLines",79,b4,6d,15),
	HX_("gridRef",2d,ba,3c,07),
	HX_("get_gridRef",44,1a,37,8d),
	::String(null()) };

::hx::Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	Grid_obj _hx_dummy;
	Grid_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Grid",a3,93,db,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Grid_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Grid_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Grid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Grid_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
