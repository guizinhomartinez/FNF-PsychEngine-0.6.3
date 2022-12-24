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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_CompoundItemRenderer
#include <haxe/ui/containers/_TableView/CompoundItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <haxe/ui/layouts/LayoutFactory.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d2aa8e0a49ec1465_87_new,"haxe.ui.containers._TableView.CompoundItemRenderer","new",0xba884dc3,"haxe.ui.containers._TableView.CompoundItemRenderer.new","haxe/ui/containers/TableView.hx",87,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_d2aa8e0a49ec1465_94_onDataChanged,"haxe.ui.containers._TableView.CompoundItemRenderer","onDataChanged",0xe538502e,"haxe.ui.containers._TableView.CompoundItemRenderer.onDataChanged","haxe/ui/containers/TableView.hx",94,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_c4cb2daf9c552525_442_registerBehaviours,"haxe.ui.containers._TableView.CompoundItemRenderer","registerBehaviours",0xa067b1d6,"haxe.ui.containers._TableView.CompoundItemRenderer.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d5795adfe51f835f_565_cloneComponent,"haxe.ui.containers._TableView.CompoundItemRenderer","cloneComponent",0xd630f11d,"haxe.ui.containers._TableView.CompoundItemRenderer.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_c4cb2daf9c552525_423_self,"haxe.ui.containers._TableView.CompoundItemRenderer","self",0x8009c4c9,"haxe.ui.containers._TableView.CompoundItemRenderer.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void CompoundItemRenderer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d2aa8e0a49ec1465_87_new)
HXLINE(  88)		super::__construct();
HXLINE(  89)		this->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(HX_("horizontal",e4,fc,c3,15)));
HXLINE(  90)		this->set_styleString(HX_("spacing: 2px;",aa,c5,06,dd));
HXLINE(  91)		this->removeClass(HX_("itemrenderer",56,55,53,bd),null(),null());
            	}

Dynamic CompoundItemRenderer_obj::__CreateEmpty() { return new CompoundItemRenderer_obj; }

void *CompoundItemRenderer_obj::_hx_vtable = 0;

Dynamic CompoundItemRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CompoundItemRenderer_obj > _hx_result = new CompoundItemRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CompoundItemRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
		if (inClassId<=(int)0x13d76ae7) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			}
		} else {
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x241810fb || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x2ccba775;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x67752b21) {
				if (inClassId<=(int)0x5e4d6caf) {
					return inClassId==(int)0x4ba87886 || inClassId==(int)0x5e4d6caf;
				} else {
					return inClassId==(int)0x67752b21;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void CompoundItemRenderer_obj::onDataChanged( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_d2aa8e0a49ec1465_94_onDataChanged)
HXLINE(  95)		::Array< ::Dynamic> renderers = this->findComponents(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null());
HXLINE(  96)		{
HXLINE(  96)			int _g = 0;
HXDLIN(  96)			while((_g < renderers->length)){
HXLINE(  96)				 ::haxe::ui::core::ItemRenderer r = renderers->__get(_g).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXDLIN(  96)				_g = (_g + 1);
HXLINE(  97)				r->onDataChanged(data);
            			}
            		}
            	}


void CompoundItemRenderer_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_c4cb2daf9c552525_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer CompoundItemRenderer_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_d5795adfe51f835f_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::_TableView::CompoundItemRenderer c = ( ( ::haxe::ui::containers::_TableView::CompoundItemRenderer)(this->super::cloneComponent()) );
HXLINE( 386)		{
HXLINE( 387)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 387)			if (::hx::IsNull( this->_children )) {
HXLINE( 387)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp = this->_children;
            			}
HXDLIN( 387)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 387)			if (::hx::IsNull( c->_children )) {
HXLINE( 387)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 387)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 388)				int _g = 0;
HXDLIN( 388)				::Array< ::Dynamic> _g1;
HXDLIN( 388)				if (::hx::IsNull( this->_children )) {
HXLINE( 388)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 388)					_g1 = this->_children;
            				}
HXDLIN( 388)				while((_g < _g1->length)){
HXLINE( 388)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 388)					_g = (_g + 1);
HXLINE( 389)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 393)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 395)		return c;
            	}


 ::haxe::ui::core::ComponentContainer CompoundItemRenderer_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_c4cb2daf9c552525_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::_TableView::CompoundItemRenderer_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< CompoundItemRenderer_obj > CompoundItemRenderer_obj::__new() {
	::hx::ObjectPtr< CompoundItemRenderer_obj > __this = new CompoundItemRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CompoundItemRenderer_obj > CompoundItemRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CompoundItemRenderer_obj *__this = (CompoundItemRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CompoundItemRenderer_obj), true, "haxe.ui.containers._TableView.CompoundItemRenderer"));
	*(void **)__this = CompoundItemRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CompoundItemRenderer_obj::CompoundItemRenderer_obj()
{
}

::hx::Val CompoundItemRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onDataChanged") ) { return ::hx::Val( onDataChanged_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CompoundItemRenderer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CompoundItemRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String CompoundItemRenderer_obj_sMemberFields[] = {
	HX_("onDataChanged",0b,19,a2,71),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class CompoundItemRenderer_obj::__mClass;

void CompoundItemRenderer_obj::__register()
{
	CompoundItemRenderer_obj _hx_dummy;
	CompoundItemRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.CompoundItemRenderer",51,b0,bf,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CompoundItemRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CompoundItemRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompoundItemRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompoundItemRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView
