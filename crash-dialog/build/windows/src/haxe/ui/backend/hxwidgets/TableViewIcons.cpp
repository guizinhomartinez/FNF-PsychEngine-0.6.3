#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_TableViewIcons
#include <haxe/ui/backend/hxwidgets/TableViewIcons.h>
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2268e46031ddca95_7_get,"haxe.ui.backend.hxwidgets.TableViewIcons","get",0x106971aa,"haxe.ui.backend.hxwidgets.TableViewIcons.get","haxe/ui/backend/hxwidgets/TableViewIcons.hx",7,0xae06205a)
HX_LOCAL_STACK_FRAME(_hx_pos_2268e46031ddca95_20_findAndCompare,"haxe.ui.backend.hxwidgets.TableViewIcons","findAndCompare",0x4e855393,"haxe.ui.backend.hxwidgets.TableViewIcons.findAndCompare","haxe/ui/backend/hxwidgets/TableViewIcons.hx",20,0xae06205a)
HX_LOCAL_STACK_FRAME(_hx_pos_2268e46031ddca95_5_boot,"haxe.ui.backend.hxwidgets.TableViewIcons","boot",0x4893849e,"haxe.ui.backend.hxwidgets.TableViewIcons.boot","haxe/ui/backend/hxwidgets/TableViewIcons.hx",5,0xae06205a)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{

void TableViewIcons_obj::__construct() { }

Dynamic TableViewIcons_obj::__CreateEmpty() { return new TableViewIcons_obj; }

void *TableViewIcons_obj::_hx_vtable = 0;

Dynamic TableViewIcons_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TableViewIcons_obj > _hx_result = new TableViewIcons_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TableViewIcons_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76dc7410;
}

 ::haxe::ds::StringMap TableViewIcons_obj::_map;

 ::hx::widgets::Bitmap TableViewIcons_obj::get(::String id){
            	HX_STACKFRAME(&_hx_pos_2268e46031ddca95_7_get)
HXLINE(   8)		if (::haxe::ui::backend::hxwidgets::TableViewIcons_obj::_map->exists(id)) {
HXLINE(   9)			return ( ( ::hx::widgets::Bitmap)(::haxe::ui::backend::hxwidgets::TableViewIcons_obj::_map->get(id)) );
            		}
HXLINE(  12)		 ::hx::widgets::Bitmap bitmap = ::hx::widgets::Bitmap_obj::fromHaxeResource(id);
HXLINE(  13)		if (::hx::IsNull( bitmap )) {
HXLINE(  14)			return null();
            		}
HXLINE(  16)		::haxe::ui::backend::hxwidgets::TableViewIcons_obj::_map->set(id,bitmap);
HXLINE(  17)		return bitmap;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TableViewIcons_obj,get,return )

bool TableViewIcons_obj::findAndCompare(::String id, ::hx::widgets::Bitmap bmp){
            	HX_STACKFRAME(&_hx_pos_2268e46031ddca95_20_findAndCompare)
HXLINE(  21)		 ::hx::widgets::Bitmap entry = ( ( ::hx::widgets::Bitmap)(::haxe::ui::backend::hxwidgets::TableViewIcons_obj::_map->get(id)) );
HXLINE(  22)		bool _hx_tmp;
HXDLIN(  22)		if (::hx::IsNull( entry )) {
HXLINE(  22)			_hx_tmp = ::hx::IsNotNull( bmp );
            		}
            		else {
HXLINE(  22)			_hx_tmp = false;
            		}
HXDLIN(  22)		if (_hx_tmp) {
HXLINE(  23)			return true;
            		}
            		else {
HXLINE(  24)			bool _hx_tmp;
HXDLIN(  24)			if (::hx::IsNotNull( entry )) {
HXLINE(  24)				_hx_tmp = ::hx::IsNull( bmp );
            			}
            			else {
HXLINE(  24)				_hx_tmp = false;
            			}
HXDLIN(  24)			if (_hx_tmp) {
HXLINE(  25)				return true;
            			}
            			else {
HXLINE(  26)				bool _hx_tmp;
HXDLIN(  26)				if (::hx::IsNull( entry )) {
HXLINE(  26)					_hx_tmp = ::hx::IsNull( bmp );
            				}
            				else {
HXLINE(  26)					_hx_tmp = false;
            				}
HXDLIN(  26)				if (_hx_tmp) {
HXLINE(  27)					return false;
            				}
            			}
            		}
HXLINE(  29)		return !(bmp->equals(entry));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TableViewIcons_obj,findAndCompare,return )


TableViewIcons_obj::TableViewIcons_obj()
{
}

bool TableViewIcons_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { outValue = ( _map ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"findAndCompare") ) { outValue = findAndCompare_dyn(); return true; }
	}
	return false;
}

bool TableViewIcons_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TableViewIcons_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo TableViewIcons_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &TableViewIcons_obj::_map,HX_("_map",9d,4f,1e,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void TableViewIcons_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TableViewIcons_obj::_map,"_map");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TableViewIcons_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TableViewIcons_obj::_map,"_map");
};

#endif

::hx::Class TableViewIcons_obj::__mClass;

static ::String TableViewIcons_obj_sStaticFields[] = {
	HX_("_map",9d,4f,1e,3f),
	HX_("get",96,80,4e,00),
	HX_("findAndCompare",27,14,38,e3),
	::String(null())
};

void TableViewIcons_obj::__register()
{
	TableViewIcons_obj _hx_dummy;
	TableViewIcons_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.TableViewIcons",82,37,b4,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TableViewIcons_obj::__GetStatic;
	__mClass->mSetStaticField = &TableViewIcons_obj::__SetStatic;
	__mClass->mMarkFunc = TableViewIcons_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TableViewIcons_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TableViewIcons_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TableViewIcons_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TableViewIcons_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TableViewIcons_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TableViewIcons_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_2268e46031ddca95_5_boot)
HXDLIN(   5)		_map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
