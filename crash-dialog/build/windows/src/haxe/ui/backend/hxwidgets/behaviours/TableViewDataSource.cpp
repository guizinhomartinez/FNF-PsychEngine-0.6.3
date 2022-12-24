#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_TableViewIcons
#include <haxe/ui/backend/hxwidgets/TableViewIcons.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_TableViewDataSource
#include <haxe/ui/backend/hxwidgets/behaviours/TableViewDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_TableViewBuilder
#include <haxe/ui/backend/hxwidgets/builders/TableViewBuilder.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewCtrl
#include <hx/widgets/DataViewCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewListCtrl
#include <hx/widgets/DataViewListCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1c73b65742d5a493_13_new,"haxe.ui.backend.hxwidgets.behaviours.TableViewDataSource","new",0xf32100ad,"haxe.ui.backend.hxwidgets.behaviours.TableViewDataSource.new","haxe/ui/backend/hxwidgets/behaviours/TableViewDataSource.hx",13,0x8bf65002)
HX_LOCAL_STACK_FRAME(_hx_pos_1c73b65742d5a493_14_validateData,"haxe.ui.backend.hxwidgets.behaviours.TableViewDataSource","validateData",0x2ed633f3,"haxe.ui.backend.hxwidgets.behaviours.TableViewDataSource.validateData","haxe/ui/backend/hxwidgets/behaviours/TableViewDataSource.hx",14,0x8bf65002)
HX_LOCAL_STACK_FRAME(_hx_pos_1c73b65742d5a493_94_set,"haxe.ui.backend.hxwidgets.behaviours.TableViewDataSource","set",0xf324cbef,"haxe.ui.backend.hxwidgets.behaviours.TableViewDataSource.set","haxe/ui/backend/hxwidgets/behaviours/TableViewDataSource.hx",94,0x8bf65002)
HX_LOCAL_STACK_FRAME(_hx_pos_1c73b65742d5a493_99_set,"haxe.ui.backend.hxwidgets.behaviours.TableViewDataSource","set",0xf324cbef,"haxe.ui.backend.hxwidgets.behaviours.TableViewDataSource.set","haxe/ui/backend/hxwidgets/behaviours/TableViewDataSource.hx",99,0x8bf65002)
HX_LOCAL_STACK_FRAME(_hx_pos_1c73b65742d5a493_104_get,"haxe.ui.backend.hxwidgets.behaviours.TableViewDataSource","get",0xf31bb0e3,"haxe.ui.backend.hxwidgets.behaviours.TableViewDataSource.get","haxe/ui/backend/hxwidgets/behaviours/TableViewDataSource.hx",104,0x8bf65002)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void TableViewDataSource_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_1c73b65742d5a493_13_new)
HXDLIN(  13)		super::__construct(component);
            	}

Dynamic TableViewDataSource_obj::__CreateEmpty() { return new TableViewDataSource_obj; }

void *TableViewDataSource_obj::_hx_vtable = 0;

Dynamic TableViewDataSource_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TableViewDataSource_obj > _hx_result = new TableViewDataSource_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TableViewDataSource_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x7e17fa9f || inClassId==(int)0x7e71aef9;
	}
}

void TableViewDataSource_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_1c73b65742d5a493_14_validateData)
HXLINE(  15)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  16)			return;
            		}
HXLINE(  19)		 ::haxe::ui::backend::hxwidgets::builders::TableViewBuilder builder = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::builders::TableViewBuilder >::cast(this->_component->_compositeBuilder);
HXLINE(  20)		if ((builder->headersCreated == false)) {
HXLINE(  21)			return;
            		}
HXLINE(  23)		 ::hx::widgets::DataViewListCtrl dataList = ::hx::TCast<  ::hx::widgets::DataViewListCtrl >::cast(this->_component->get_window());
HXLINE(  24)		 ::haxe::ui::data::DataSource ds = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->_value);
HXLINE(  25)		int tableSize = dataList->get_itemCount();
HXLINE(  26)		int diff = (tableSize - ds->get_size());
HXLINE(  27)		while((diff > 0)){
HXLINE(  28)			dataList->deleteItem((dataList->get_itemCount() - 1));
HXLINE(  29)			diff = (diff - 1);
            		}
HXLINE(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			int _g1 = ds->get_size();
HXDLIN(  32)			while((_g < _g1)){
HXLINE(  32)				_g = (_g + 1);
HXDLIN(  32)				int n = (_g - 1);
HXLINE(  33)				 ::Dynamic item = ds->get(n);
HXLINE(  35)				if ((n > (tableSize - 1))) {
HXLINE(  36)					::cpp::VirtualArray values = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  37)					int i = 0;
HXLINE(  38)					{
HXLINE(  38)						int _g = 0;
HXDLIN(  38)						::Array< ::Dynamic> _g1 = builder->columns;
HXDLIN(  38)						while((_g < _g1->length)){
HXLINE(  38)							 ::Dynamic col = _g1->__get(_g);
HXDLIN(  38)							_g = (_g + 1);
HXLINE(  39)							 ::Dynamic r = builder->getRendererInfo(i);
HXLINE(  40)							 ::Dynamic v = ::Reflect_obj::field(item,( (::String)(col->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ));
HXLINE(  41)							::String _hx_switch_0 = ( (::String)(r->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) );
            							if (  (_hx_switch_0==HX_("checkbox",43,d2,f5,ac)) ){
HXLINE(  43)								v = ::hx::IsEq( v,HX_("true",4e,a7,03,4d) );
HXDLIN(  43)								goto _hx_goto_4;
            							}
            							if (  (_hx_switch_0==HX_("image",5b,1f,69,bd)) ){
HXLINE(  47)								v = ::haxe::ui::backend::hxwidgets::TableViewIcons_obj::get(( (::String)(v) ));
HXDLIN(  47)								goto _hx_goto_4;
            							}
            							if (  (_hx_switch_0==HX_("number",c9,86,7a,a1)) ){
HXLINE(  49)								v = ::Std_obj::parseInt(( (::String)(v) ));
HXDLIN(  49)								goto _hx_goto_4;
            							}
            							if (  (_hx_switch_0==HX_("progress",ad,f7,2a,86)) ){
HXLINE(  45)								v = ::Std_obj::parseInt(( (::String)(v) ));
HXDLIN(  45)								goto _hx_goto_4;
            							}
            							/* default */{
HXLINE(  51)								v = ::Std_obj::string(v);
            							}
            							_hx_goto_4:;
HXLINE(  53)							if (::hx::IsNull( v )) {
HXLINE(  54)								v = HX_("",00,00,00,00);
            							}
HXLINE(  56)							values->push(v);
HXLINE(  57)							i = (i + 1);
            						}
            					}
HXLINE(  59)					dataList->appendItem(values);
            				}
            				else {
HXLINE(  61)					int columnCount = dataList->get_columnCount();
HXLINE(  62)					{
HXLINE(  62)						int _g = 0;
HXDLIN(  62)						int _g1 = columnCount;
HXDLIN(  62)						while((_g < _g1)){
HXLINE(  62)							_g = (_g + 1);
HXDLIN(  62)							int colIndex = (_g - 1);
HXLINE(  63)							 ::Dynamic r = builder->getRendererInfo(colIndex);
HXLINE(  64)							 ::Dynamic columnInfo = builder->columns->__get(colIndex);
HXLINE(  65)							 ::Dynamic datasourceValue = ::Reflect_obj::field(item,( (::String)(columnInfo->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ));
HXLINE(  66)							 ::Dynamic currentValue = dataList->getValue(n,colIndex);
HXLINE(  67)							bool changed = false;
HXLINE(  68)							if (::hx::IsEq( r->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),HX_("image",5b,1f,69,bd) )) {
HXLINE(  70)								changed = ::haxe::ui::backend::hxwidgets::TableViewIcons_obj::findAndCompare(( (::String)(datasourceValue) ),::hx::TCast<  ::hx::widgets::Bitmap >::cast(currentValue));
            							}
            							else {
HXLINE(  72)								::String changed1 = ::Std_obj::string(currentValue);
HXDLIN(  72)								changed = (changed1 != ::Std_obj::string(datasourceValue));
            							}
HXLINE(  75)							if ((changed == true)) {
HXLINE(  76)								::String _hx_switch_1 = ( (::String)(r->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) );
            								if (  (_hx_switch_1==HX_("checkbox",43,d2,f5,ac)) ){
HXLINE(  78)									dataList->setValue(n,colIndex,::hx::IsEq( datasourceValue,true ));
HXDLIN(  78)									goto _hx_goto_6;
            								}
            								if (  (_hx_switch_1==HX_("image",5b,1f,69,bd)) ){
HXLINE(  82)									dataList->setValue(n,colIndex,::haxe::ui::backend::hxwidgets::TableViewIcons_obj::get(( (::String)(datasourceValue) )));
HXDLIN(  82)									goto _hx_goto_6;
            								}
            								if (  (_hx_switch_1==HX_("number",c9,86,7a,a1)) ){
HXLINE(  84)									dataList->setValue(n,colIndex,::Std_obj::parseInt(( (::String)(datasourceValue) )));
HXDLIN(  84)									goto _hx_goto_6;
            								}
            								if (  (_hx_switch_1==HX_("progress",ad,f7,2a,86)) ){
HXLINE(  80)									dataList->setValue(n,colIndex,::Std_obj::parseInt(( (::String)(datasourceValue) )));
HXDLIN(  80)									goto _hx_goto_6;
            								}
            								/* default */{
HXLINE(  86)									dataList->setValue(n,colIndex,::Std_obj::string(datasourceValue));
            								}
            								_hx_goto_6:;
            							}
            						}
            					}
            				}
            			}
            		}
            	}


void TableViewDataSource_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_1c73b65742d5a493_94_set)
HXDLIN(  94)		 ::haxe::ui::backend::hxwidgets::behaviours::TableViewDataSource _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  95)		this->super::set(value);
HXLINE(  96)		bool _hx_tmp;
HXDLIN(  96)		if (::hx::IsNotNull( value )) {
HXLINE(  96)			_hx_tmp = (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value) == false);
            		}
            		else {
HXLINE(  96)			_hx_tmp = false;
            		}
HXDLIN(  96)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::backend::hxwidgets::behaviours::TableViewDataSource,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_1c73b65742d5a493_99_set)
HXLINE(  99)				_gthis->validateData();
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  97)			 ::haxe::ui::data::DataSource ds = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(value);
HXLINE(  98)			ds->onChange =  ::Dynamic(new _hx_Closure_0(_gthis));
            		}
            	}


 ::haxe::ui::util::VariantType TableViewDataSource_obj::get(){
            	HX_GC_STACKFRAME(&_hx_pos_1c73b65742d5a493_104_get)
HXLINE( 105)		bool _hx_tmp;
HXDLIN( 105)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 105)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXLINE( 105)			_hx_tmp = true;
            		}
HXDLIN( 105)		if (_hx_tmp) {
HXLINE( 106)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource( ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX ,null()));
HXLINE( 107)			this->set(this->_value);
            		}
HXLINE( 109)		return this->_value;
            	}



::hx::ObjectPtr< TableViewDataSource_obj > TableViewDataSource_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TableViewDataSource_obj > __this = new TableViewDataSource_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TableViewDataSource_obj > TableViewDataSource_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TableViewDataSource_obj *__this = (TableViewDataSource_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TableViewDataSource_obj), true, "haxe.ui.backend.hxwidgets.behaviours.TableViewDataSource"));
	*(void **)__this = TableViewDataSource_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TableViewDataSource_obj::TableViewDataSource_obj()
{
}

::hx::Val TableViewDataSource_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TableViewDataSource_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TableViewDataSource_obj_sStaticStorageInfo = 0;
#endif

static ::String TableViewDataSource_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class TableViewDataSource_obj::__mClass;

void TableViewDataSource_obj::__register()
{
	TableViewDataSource_obj _hx_dummy;
	TableViewDataSource_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.TableViewDataSource",3b,26,b6,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TableViewDataSource_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TableViewDataSource_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TableViewDataSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TableViewDataSource_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
