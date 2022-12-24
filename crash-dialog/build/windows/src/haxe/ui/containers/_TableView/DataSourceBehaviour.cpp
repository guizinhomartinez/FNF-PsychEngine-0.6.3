#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
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
#ifndef INCLUDED_haxe_ui_containers__TableView_DataSourceBehaviour
#include <haxe/ui/containers/_TableView/DataSourceBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_data_ArrayDataSource
#include <haxe/ui/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_NativeTypeTransformer
#include <haxe/ui/data/transformation/NativeTypeTransformer.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_39fbe7471cd72fbf_620_new,"haxe.ui.containers._TableView.DataSourceBehaviour","new",0x0f08d2fa,"haxe.ui.containers._TableView.DataSourceBehaviour.new","haxe/ui/containers/TableView.hx",620,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_39fbe7471cd72fbf_622_set,"haxe.ui.containers._TableView.DataSourceBehaviour","set",0x0f0c9e3c,"haxe.ui.containers._TableView.DataSourceBehaviour.set","haxe/ui/containers/TableView.hx",622,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_39fbe7471cd72fbf_627_set,"haxe.ui.containers._TableView.DataSourceBehaviour","set",0x0f0c9e3c,"haxe.ui.containers._TableView.DataSourceBehaviour.set","haxe/ui/containers/TableView.hx",627,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_39fbe7471cd72fbf_641_get,"haxe.ui.containers._TableView.DataSourceBehaviour","get",0x0f038330,"haxe.ui.containers._TableView.DataSourceBehaviour.get","haxe/ui/containers/TableView.hx",641,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void DataSourceBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_39fbe7471cd72fbf_620_new)
HXLINE( 621)		this->_firstPass = true;
HXLINE( 620)		super::__construct(component);
            	}

Dynamic DataSourceBehaviour_obj::__CreateEmpty() { return new DataSourceBehaviour_obj; }

void *DataSourceBehaviour_obj::_hx_vtable = 0;

Dynamic DataSourceBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataSourceBehaviour_obj > _hx_result = new DataSourceBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DataSourceBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x59595d38 || inClassId==(int)0x7e17fa9f;
	}
}

void DataSourceBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_39fbe7471cd72fbf_622_set)
HXDLIN( 622)		 ::haxe::ui::containers::_TableView::DataSourceBehaviour _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 623)		this->super::set(value);
HXLINE( 624)		 ::haxe::ui::data::DataSource dataSource = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->_value);
HXLINE( 625)		if (::hx::IsNotNull( dataSource )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::_TableView::DataSourceBehaviour,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_39fbe7471cd72fbf_627_set)
HXLINE( 628)				{
HXLINE( 628)					 ::haxe::ui::core::Component _this = _gthis->_component;
HXDLIN( 628)					bool _hx_tmp;
HXDLIN( 628)					if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 628)						_hx_tmp = (_this->_layoutLocked == true);
            					}
            					else {
HXLINE( 628)						_hx_tmp = true;
            					}
HXDLIN( 628)					if (!(_hx_tmp)) {
HXLINE( 628)						_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            					}
            				}
HXLINE( 629)				if ((_gthis->_firstPass == true)) {
HXLINE( 631)					_gthis->_firstPass = false;
HXLINE( 632)					{
HXLINE( 632)						 ::haxe::ui::core::Component _this = _gthis->_component;
HXDLIN( 632)						bool _hx_tmp;
HXDLIN( 632)						if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 632)							_hx_tmp = (_this->_layoutLocked == true);
            						}
            						else {
HXLINE( 632)							_hx_tmp = true;
            						}
HXDLIN( 632)						if (!(_hx_tmp)) {
HXLINE( 632)							_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            						}
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 626)			dataSource->transformer =  ::haxe::ui::data::transformation::NativeTypeTransformer_obj::__alloc( HX_CTX );
HXLINE( 627)			dataSource->onDataSourceChange =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 635)			{
HXLINE( 635)				 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 635)				bool _hx_tmp;
HXDLIN( 635)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 635)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE( 635)					_hx_tmp = true;
            				}
HXDLIN( 635)				if (!(_hx_tmp)) {
HXLINE( 635)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
            		else {
HXLINE( 637)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 637)			bool _hx_tmp;
HXDLIN( 637)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 637)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 637)				_hx_tmp = true;
            			}
HXDLIN( 637)			if (!(_hx_tmp)) {
HXLINE( 637)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


 ::haxe::ui::util::VariantType DataSourceBehaviour_obj::get(){
            	HX_GC_STACKFRAME(&_hx_pos_39fbe7471cd72fbf_641_get)
HXLINE( 642)		bool _hx_tmp;
HXDLIN( 642)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 642)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXLINE( 642)			_hx_tmp = true;
            		}
HXDLIN( 642)		if (_hx_tmp) {
HXLINE( 643)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource( ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX ,null()));
HXLINE( 644)			this->set(this->_value);
            		}
HXLINE( 646)		return this->_value;
            	}



::hx::ObjectPtr< DataSourceBehaviour_obj > DataSourceBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< DataSourceBehaviour_obj > __this = new DataSourceBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< DataSourceBehaviour_obj > DataSourceBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DataSourceBehaviour_obj *__this = (DataSourceBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataSourceBehaviour_obj), true, "haxe.ui.containers._TableView.DataSourceBehaviour"));
	*(void **)__this = DataSourceBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DataSourceBehaviour_obj::DataSourceBehaviour_obj()
{
}

::hx::Val DataSourceBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_firstPass") ) { return ::hx::Val( _firstPass ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataSourceBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_firstPass") ) { _firstPass=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataSourceBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_firstPass",e2,dc,c2,5c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataSourceBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DataSourceBehaviour_obj,_firstPass),HX_("_firstPass",e2,dc,c2,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataSourceBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DataSourceBehaviour_obj_sMemberFields[] = {
	HX_("_firstPass",e2,dc,c2,5c),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class DataSourceBehaviour_obj::__mClass;

void DataSourceBehaviour_obj::__register()
{
	DataSourceBehaviour_obj _hx_dummy;
	DataSourceBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.DataSourceBehaviour",08,8e,39,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataSourceBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataSourceBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataSourceBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataSourceBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView
