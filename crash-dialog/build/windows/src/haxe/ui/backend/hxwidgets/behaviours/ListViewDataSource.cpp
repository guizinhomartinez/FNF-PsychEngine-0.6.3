#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_ListViewIcons
#include <haxe/ui/backend/hxwidgets/ListViewIcons.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ListViewDataSource
#include <haxe/ui/backend/hxwidgets/behaviours/ListViewDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
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
#ifndef INCLUDED_haxe_ui_data_ArrayDataSource
#include <haxe/ui/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
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
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_ListCtrl
#include <hx/widgets/ListCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_ListItem
#include <hx/widgets/ListItem.h>
#endif
#ifndef INCLUDED_hx_widgets_ListView
#include <hx/widgets/ListView.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2ad84c00bd25e81b_11_new,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource","new",0x087ca317,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource.new","haxe/ui/backend/hxwidgets/behaviours/ListViewDataSource.hx",11,0x7a95687a)
HX_LOCAL_STACK_FRAME(_hx_pos_2ad84c00bd25e81b_12_validateData,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource","validateData",0xd4cbf449,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource.validateData","haxe/ui/backend/hxwidgets/behaviours/ListViewDataSource.hx",12,0x7a95687a)
HX_LOCAL_STACK_FRAME(_hx_pos_2ad84c00bd25e81b_65_createListItem,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource","createListItem",0x988ade56,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource.createListItem","haxe/ui/backend/hxwidgets/behaviours/ListViewDataSource.hx",65,0x7a95687a)
HX_LOCAL_STACK_FRAME(_hx_pos_2ad84c00bd25e81b_72_set,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource","set",0x08806e59,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource.set","haxe/ui/backend/hxwidgets/behaviours/ListViewDataSource.hx",72,0x7a95687a)
HX_LOCAL_STACK_FRAME(_hx_pos_2ad84c00bd25e81b_77_set,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource","set",0x08806e59,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource.set","haxe/ui/backend/hxwidgets/behaviours/ListViewDataSource.hx",77,0x7a95687a)
HX_LOCAL_STACK_FRAME(_hx_pos_2ad84c00bd25e81b_82_get,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource","get",0x0877534d,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource.get","haxe/ui/backend/hxwidgets/behaviours/ListViewDataSource.hx",82,0x7a95687a)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ListViewDataSource_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_2ad84c00bd25e81b_11_new)
HXDLIN(  11)		super::__construct(component);
            	}

Dynamic ListViewDataSource_obj::__CreateEmpty() { return new ListViewDataSource_obj; }

void *ListViewDataSource_obj::_hx_vtable = 0;

Dynamic ListViewDataSource_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListViewDataSource_obj > _hx_result = new ListViewDataSource_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ListViewDataSource_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x376ea8eb) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x376ea8eb;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void ListViewDataSource_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_2ad84c00bd25e81b_12_validateData)
HXLINE(  13)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  14)			return;
            		}
HXLINE(  17)		 ::hx::widgets::ListView view = ::hx::TCast<  ::hx::widgets::ListView >::cast(this->_component->get_window());
HXLINE(  19)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value)) {
HXLINE(  20)			view->deleteAllItems();
HXLINE(  21)			return;
            		}
HXLINE(  24)		 ::haxe::ui::data::DataSource ds = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->_value);
HXLINE(  25)		 ::hx::widgets::ListItem info =  ::hx::widgets::ListItem_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  26)		int listSize = view->get_itemCount();
HXLINE(  27)		int diff = (listSize - ds->get_size());
HXLINE(  28)		while((diff > 0)){
HXLINE(  29)			view->deleteItem((view->get_itemCount() - 1));
HXLINE(  30)			diff = (diff - 1);
            		}
HXLINE(  33)		{
HXLINE(  33)			int _g = 0;
HXDLIN(  33)			int _g1 = ds->get_size();
HXDLIN(  33)			while((_g < _g1)){
HXLINE(  33)				_g = (_g + 1);
HXDLIN(  33)				int n = (_g - 1);
HXLINE(  34)				 ::Dynamic item = ds->get(n);
HXLINE(  36)				if ((n > (listSize - 1))) {
HXLINE(  37)					view->addItem(this->createListItem(item),null());
            				}
            				else {
HXLINE(  39)					info->set_id(n);
HXLINE(  40)					bool b = view->getItem(info);
HXLINE(  41)					if ((b == true)) {
HXLINE(  42)						int image = 0;
HXLINE(  43)						::String text = HX_("",00,00,00,00);
HXLINE(  44)						bool _hx_tmp;
HXDLIN(  44)						if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(item),::ValueType_obj::TObject_dyn() )) {
HXLINE(  44)							_hx_tmp = ::hx::IsNotNull( item->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic) );
            						}
            						else {
HXLINE(  44)							_hx_tmp = false;
            						}
HXDLIN(  44)						if (_hx_tmp) {
HXLINE(  45)							text = ( (::String)(item->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
HXLINE(  46)							image = ::haxe::ui::backend::hxwidgets::ListViewIcons_obj::get(( ( ::haxe::ui::containers::ListView)(this->_component) ),( (::String)(item->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) ),null());
HXLINE(  47)							if ((image == -1)) {
HXLINE(  48)								image = 0;
            							}
            						}
            						else {
HXLINE(  51)							text = ::Std_obj::string(item);
            						}
HXLINE(  54)						bool _hx_tmp1;
HXDLIN(  54)						if ((info->get_text() == text)) {
HXLINE(  54)							_hx_tmp1 = (info->get_image() != image);
            						}
            						else {
HXLINE(  54)							_hx_tmp1 = true;
            						}
HXDLIN(  54)						if (_hx_tmp1) {
HXLINE(  55)							info->set_text(text);
HXLINE(  56)							info->set_image(image);
HXLINE(  57)							view->setItem(info,false);
            						}
            					}
            				}
            			}
            		}
HXLINE(  62)		info->destroy();
            	}


 ::hx::widgets::ListItem ListViewDataSource_obj::createListItem( ::Dynamic item){
            	HX_GC_STACKFRAME(&_hx_pos_2ad84c00bd25e81b_65_createListItem)
HXLINE(  66)		bool _hx_tmp;
HXDLIN(  66)		if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(item),::ValueType_obj::TObject_dyn() )) {
HXLINE(  66)			_hx_tmp = ::hx::IsNotNull( item->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic) );
            		}
            		else {
HXLINE(  66)			_hx_tmp = false;
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  67)			 ::Dynamic item1 =  ::Dynamic(item->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic));
HXDLIN(  67)			return  ::hx::widgets::ListItem_obj::__alloc( HX_CTX ,( (::String)(item1) ),::haxe::ui::backend::hxwidgets::ListViewIcons_obj::get(( ( ::haxe::ui::containers::ListView)(this->_component) ),( (::String)(item->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) ),null()),null(),null());
            		}
HXLINE(  69)		return  ::hx::widgets::ListItem_obj::__alloc( HX_CTX ,::Std_obj::string(item),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListViewDataSource_obj,createListItem,return )

void ListViewDataSource_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_2ad84c00bd25e81b_72_set)
HXDLIN(  72)		 ::haxe::ui::backend::hxwidgets::behaviours::ListViewDataSource _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  73)		this->super::set(value);
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		if (::hx::IsNotNull( value )) {
HXLINE(  74)			_hx_tmp = (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value) == false);
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::backend::hxwidgets::behaviours::ListViewDataSource,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_2ad84c00bd25e81b_77_set)
HXLINE(  77)				_gthis->validateData();
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  75)			 ::haxe::ui::data::DataSource ds = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(value);
HXLINE(  76)			ds->onChange =  ::Dynamic(new _hx_Closure_0(_gthis));
            		}
            	}


 ::haxe::ui::util::VariantType ListViewDataSource_obj::get(){
            	HX_GC_STACKFRAME(&_hx_pos_2ad84c00bd25e81b_82_get)
HXLINE(  83)		bool _hx_tmp;
HXDLIN(  83)		if (::hx::IsNotNull( this->_value )) {
HXLINE(  83)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXLINE(  83)			_hx_tmp = true;
            		}
HXDLIN(  83)		if (_hx_tmp) {
HXLINE(  84)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource( ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX ,null()));
HXLINE(  85)			this->set(this->_value);
            		}
HXLINE(  87)		return this->_value;
            	}



::hx::ObjectPtr< ListViewDataSource_obj > ListViewDataSource_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ListViewDataSource_obj > __this = new ListViewDataSource_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ListViewDataSource_obj > ListViewDataSource_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ListViewDataSource_obj *__this = (ListViewDataSource_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListViewDataSource_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource"));
	*(void **)__this = ListViewDataSource_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ListViewDataSource_obj::ListViewDataSource_obj()
{
}

::hx::Val ListViewDataSource_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createListItem") ) { return ::hx::Val( createListItem_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ListViewDataSource_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ListViewDataSource_obj_sStaticStorageInfo = 0;
#endif

static ::String ListViewDataSource_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("createListItem",ad,13,ef,77),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class ListViewDataSource_obj::__mClass;

void ListViewDataSource_obj::__register()
{
	ListViewDataSource_obj _hx_dummy;
	ListViewDataSource_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource",a5,cb,61,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ListViewDataSource_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ListViewDataSource_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListViewDataSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListViewDataSource_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
