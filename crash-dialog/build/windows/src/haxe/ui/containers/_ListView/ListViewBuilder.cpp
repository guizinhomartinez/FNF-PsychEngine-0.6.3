#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ListView_ListViewBuilder
#include <haxe/ui/containers/_ListView/ListViewBuilder.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ScrollViewLayout
#include <haxe/ui/layouts/ScrollViewLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalVirtualLayout
#include <haxe/ui/layouts/VerticalVirtualLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VirtualLayout
#include <haxe/ui/layouts/VirtualLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8d2dfa7d3e5dcdda_324_new,"haxe.ui.containers._ListView.ListViewBuilder","new",0xce3e8ef4,"haxe.ui.containers._ListView.ListViewBuilder.new","haxe/ui/containers/ListView.hx",324,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_8d2dfa7d3e5dcdda_330_create,"haxe.ui.containers._ListView.ListViewBuilder","create",0xb4c2fce8,"haxe.ui.containers._ListView.ListViewBuilder.create","haxe/ui/containers/ListView.hx",330,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_8d2dfa7d3e5dcdda_334_createContentContainer,"haxe.ui.containers._ListView.ListViewBuilder","createContentContainer",0x57f601d0,"haxe.ui.containers._ListView.ListViewBuilder.createContentContainer","haxe/ui/containers/ListView.hx",334,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_8d2dfa7d3e5dcdda_341_addComponent,"haxe.ui.containers._ListView.ListViewBuilder","addComponent",0xa382e148,"haxe.ui.containers._ListView.ListViewBuilder.addComponent","haxe/ui/containers/ListView.hx",341,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_8d2dfa7d3e5dcdda_355_onVirtualChanged,"haxe.ui.containers._ListView.ListViewBuilder","onVirtualChanged",0x1307a494,"haxe.ui.containers._ListView.ListViewBuilder.onVirtualChanged","haxe/ui/containers/ListView.hx",355,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_8d2dfa7d3e5dcdda_359_addItemRendererClass,"haxe.ui.containers._ListView.ListViewBuilder","addItemRendererClass",0x3f52be6d,"haxe.ui.containers._ListView.ListViewBuilder.addItemRendererClass","haxe/ui/containers/ListView.hx",359,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_8d2dfa7d3e5dcdda_364_addItemRendererClass,"haxe.ui.containers._ListView.ListViewBuilder","addItemRendererClass",0x3f52be6d,"haxe.ui.containers._ListView.ListViewBuilder.addItemRendererClass","haxe/ui/containers/ListView.hx",364,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_8d2dfa7d3e5dcdda_358_addItemRendererClass,"haxe.ui.containers._ListView.ListViewBuilder","addItemRendererClass",0x3f52be6d,"haxe.ui.containers._ListView.ListViewBuilder.addItemRendererClass","haxe/ui/containers/ListView.hx",358,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_8d2dfa7d3e5dcdda_377_ensureVisible,"haxe.ui.containers._ListView.ListViewBuilder","ensureVisible",0x269d3de8,"haxe.ui.containers._ListView.ListViewBuilder.ensureVisible","haxe/ui/containers/ListView.hx",377,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_8d2dfa7d3e5dcdda_392_ensureVirtualItemVisible,"haxe.ui.containers._ListView.ListViewBuilder","ensureVirtualItemVisible",0xcbea459e,"haxe.ui.containers._ListView.ListViewBuilder.ensureVirtualItemVisible","haxe/ui/containers/ListView.hx",392,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_8d2dfa7d3e5dcdda_408_applyStyle,"haxe.ui.containers._ListView.ListViewBuilder","applyStyle",0xd4a21ccf,"haxe.ui.containers._ListView.ListViewBuilder.applyStyle","haxe/ui/containers/ListView.hx",408,0xe137bf10)
namespace haxe{
namespace ui{
namespace containers{
namespace _ListView{

void ListViewBuilder_obj::__construct( ::haxe::ui::containers::ListView listview){
            	HX_STACKFRAME(&_hx_pos_8d2dfa7d3e5dcdda_324_new)
HXLINE( 325)		super::__construct(listview);
HXLINE( 326)		this->_listview = listview;
            	}

Dynamic ListViewBuilder_obj::__CreateEmpty() { return new ListViewBuilder_obj; }

void *ListViewBuilder_obj::_hx_vtable = 0;

Dynamic ListViewBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListViewBuilder_obj > _hx_result = new ListViewBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ListViewBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17e93bfd) {
		if (inClassId<=(int)0x0472fd8d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
		} else {
			return inClassId==(int)0x17e93bfd;
		}
	} else {
		return inClassId==(int)0x517616ae;
	}
}

void ListViewBuilder_obj::create(){
            	HX_STACKFRAME(&_hx_pos_8d2dfa7d3e5dcdda_330_create)
HXDLIN( 330)		::String _hx_tmp;
HXDLIN( 330)		if (this->_listview->get_virtual()) {
HXDLIN( 330)			_hx_tmp = HX_("absolute",77,ce,95,c3);
            		}
            		else {
HXDLIN( 330)			_hx_tmp = HX_("vertical",76,bc,15,6a);
            		}
HXDLIN( 330)		this->createContentContainer(_hx_tmp);
            	}


void ListViewBuilder_obj::createContentContainer(::String layoutName){
            	HX_STACKFRAME(&_hx_pos_8d2dfa7d3e5dcdda_334_createContentContainer)
HXDLIN( 334)		if (::hx::IsNull( this->_contents )) {
HXLINE( 335)			this->super::createContentContainer(layoutName);
HXLINE( 336)			this->_contents->addClass(HX_("listview-contents",24,54,5f,b1),null(),null());
            		}
            	}


 ::haxe::ui::core::Component ListViewBuilder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_8d2dfa7d3e5dcdda_341_addComponent)
HXLINE( 342)		 ::haxe::ui::core::Component r = null();
HXLINE( 343)		bool _hx_tmp;
HXDLIN( 343)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE( 343)			if (::hx::IsNull( this->_listview->get_itemRenderer() )) {
HXLINE( 343)				_hx_tmp = ::hx::IsNull( this->_listview->get_itemRendererClass() );
            			}
            			else {
HXLINE( 343)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 343)			_hx_tmp = false;
            		}
HXDLIN( 343)		if (_hx_tmp) {
HXLINE( 344)			this->_listview->set_itemRenderer(::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(child));
HXLINE( 345)			this->_listview->get_itemRenderer()->ready();
HXLINE( 346)			this->_listview->get_itemRenderer()->handleVisibility(false);
HXLINE( 347)			r = child;
            		}
            		else {
HXLINE( 349)			r = this->super::addComponent(child);
            		}
HXLINE( 351)		return r;
            	}


void ListViewBuilder_obj::onVirtualChanged(){
            	HX_STACKFRAME(&_hx_pos_8d2dfa7d3e5dcdda_355_onVirtualChanged)
HXDLIN( 355)		 ::haxe::ui::containers::Box _hx_tmp = this->_contents;
HXDLIN( 355)		::String _hx_tmp1;
HXDLIN( 355)		if (this->_listview->get_virtual()) {
HXDLIN( 355)			_hx_tmp1 = HX_("absolute",77,ce,95,c3);
            		}
            		else {
HXDLIN( 355)			_hx_tmp1 = HX_("vertical",76,bc,15,6a);
            		}
HXDLIN( 355)		_hx_tmp->set_layoutName(_hx_tmp1);
            	}


void ListViewBuilder_obj::addItemRendererClass( ::haxe::ui::core::Component child,::String className,::hx::Null< bool >  __o_add){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::haxe::ui::containers::_ListView::ListViewBuilder,_gthis,bool,add,::String,className) HXARGC(1)
            		bool _hx_run( ::haxe::ui::core::Component c){
            			HX_STACKFRAME(&_hx_pos_8d2dfa7d3e5dcdda_359_addItemRendererClass)
HXLINE( 360)			if (::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE( 361)				if ((add == true)) {
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::_ListView::ListViewBuilder,_gthis, ::haxe::ui::core::Component,c) HXARGC(0)
            					void _hx_run(){
            						HX_STACKFRAME(&_hx_pos_8d2dfa7d3e5dcdda_364_addItemRendererClass)
HXLINE( 364)						_gthis->ensureVisible(::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(c));
            					}
            					HX_END_LOCAL_FUNC0((void))

HXLINE( 362)					c->addClass(className,null(),null());
HXLINE( 363)					::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis,c)));
            				}
            				else {
HXLINE( 367)					c->removeClass(className,null(),null());
            				}
            			}
            			else {
HXLINE( 370)				c->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 370)				{
            				}
            			}
HXLINE( 372)			return true;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		bool add = __o_add.Default(true);
            	HX_STACKFRAME(&_hx_pos_8d2dfa7d3e5dcdda_358_addItemRendererClass)
HXDLIN( 358)		 ::haxe::ui::containers::_ListView::ListViewBuilder _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 359)		child->walkComponents( ::Dynamic(new _hx_Closure_1(_gthis,add,className)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ListViewBuilder_obj,addItemRendererClass,(void))

void ListViewBuilder_obj::ensureVisible( ::haxe::ui::core::ItemRenderer itemToEnsure){
            	HX_STACKFRAME(&_hx_pos_8d2dfa7d3e5dcdda_377_ensureVisible)
HXDLIN( 377)		bool _hx_tmp;
HXDLIN( 377)		if (::hx::IsNotNull( itemToEnsure )) {
HXDLIN( 377)			_hx_tmp = (this->_listview->get_virtual() == false);
            		}
            		else {
HXDLIN( 377)			_hx_tmp = false;
            		}
HXDLIN( 377)		if (_hx_tmp) {
HXLINE( 378)			 ::haxe::ui::components::VerticalScroll vscroll = this->_listview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),null(),null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 379)			if (::hx::IsNotNull( vscroll )) {
HXLINE( 380)				Float vpos = vscroll->get_pos();
HXLINE( 381)				 ::haxe::ui::core::Component contents = this->_listview->findComponent(HX_("listview-contents",24,54,5f,b1),null(),null(),HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 382)				 ::Dynamic _hx_tmp = itemToEnsure->get_top();
HXDLIN( 382)				Float _hx_tmp1 = (_hx_tmp + itemToEnsure->get_height());
HXDLIN( 382)				if ((_hx_tmp1 > (vpos + contents->get_componentClipRect()->height))) {
HXLINE( 383)					 ::Dynamic _hx_tmp = itemToEnsure->get_top();
HXDLIN( 383)					Float _hx_tmp1 = (_hx_tmp + itemToEnsure->get_height());
HXDLIN( 383)					vscroll->set_pos((_hx_tmp1 - contents->get_componentClipRect()->height));
            				}
            				else {
HXLINE( 384)					if (::hx::IsLess( itemToEnsure->get_top(),vpos )) {
HXLINE( 385)						vscroll->set_pos(( (Float)(itemToEnsure->get_top()) ));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListViewBuilder_obj,ensureVisible,(void))

void ListViewBuilder_obj::ensureVirtualItemVisible(int index){
            	HX_STACKFRAME(&_hx_pos_8d2dfa7d3e5dcdda_392_ensureVirtualItemVisible)
HXLINE( 393)		 ::haxe::ui::components::VerticalScroll vscroll = this->_listview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),null(),null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 394)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 395)			 ::haxe::ui::layouts::VerticalVirtualLayout layout = ::hx::TCast<  ::haxe::ui::layouts::VerticalVirtualLayout >::cast(this->_listview->get_layout());
HXLINE( 396)			Float itemHeight = layout->get_itemHeight();
HXLINE( 397)			Float itemTop = (( (Float)(index) ) * itemHeight);
HXLINE( 398)			Float vpos = vscroll->get_pos();
HXLINE( 399)			 ::haxe::ui::core::Component contents = this->_listview->findComponent(HX_("listview-contents",24,54,5f,b1),null(),null(),HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 400)			if (((itemTop + itemHeight) > (vpos + contents->get_componentClipRect()->height))) {
HXLINE( 401)				vscroll->set_pos(((itemTop + itemHeight) - contents->get_componentClipRect()->height));
            			}
            			else {
HXLINE( 402)				if ((itemTop < vpos)) {
HXLINE( 403)					vscroll->set_pos(itemTop);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListViewBuilder_obj,ensureVirtualItemVisible,(void))

void ListViewBuilder_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_8d2dfa7d3e5dcdda_408_applyStyle)
HXLINE( 409)		this->super::applyStyle(style);
HXLINE(  11)		{
HXLINE( 141)			::Array< ::Dynamic> list = this->_component->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),16777215);
HXLINE( 153)			{
HXLINE( 153)				int _g = 0;
HXDLIN( 153)				while((_g < list->length)){
HXLINE( 153)					 ::haxe::ui::components::Label c = list->__get(_g).StaticCast<  ::haxe::ui::components::Label >();
HXDLIN( 153)					_g = (_g + 1);
HXLINE( 154)					bool invalidate = false;
HXLINE( 156)					{
HXLINE( 146)						bool _hx_tmp;
HXDLIN( 146)						if (::hx::IsNull( c->get_customStyle()->color )) {
HXLINE( 146)							_hx_tmp = ::hx::IsNotEq( c->get_customStyle()->color,style->color );
            						}
            						else {
HXLINE( 146)							_hx_tmp = false;
            						}
HXDLIN( 146)						if (_hx_tmp) {
HXLINE( 147)							c->get_customStyle()->color = style->color;
HXLINE( 148)							invalidate = true;
            						}
HXLINE( 146)						bool _hx_tmp1;
HXDLIN( 146)						if (::hx::IsNull( c->get_customStyle()->fontName )) {
HXLINE( 146)							_hx_tmp1 = (c->get_customStyle()->fontName != style->fontName);
            						}
            						else {
HXLINE( 146)							_hx_tmp1 = false;
            						}
HXDLIN( 146)						if (_hx_tmp1) {
HXLINE( 147)							c->get_customStyle()->fontName = style->fontName;
HXLINE( 148)							invalidate = true;
            						}
HXLINE( 146)						bool _hx_tmp2;
HXDLIN( 146)						if (::hx::IsNull( c->get_customStyle()->fontSize )) {
HXLINE( 146)							_hx_tmp2 = ::hx::IsNotEq( c->get_customStyle()->fontSize,style->fontSize );
            						}
            						else {
HXLINE( 146)							_hx_tmp2 = false;
            						}
HXDLIN( 146)						if (_hx_tmp2) {
HXLINE( 147)							c->get_customStyle()->fontSize = style->fontSize;
HXLINE( 148)							invalidate = true;
            						}
HXLINE( 146)						bool _hx_tmp3;
HXDLIN( 146)						if (::hx::IsNull( c->get_customStyle()->cursor )) {
HXLINE( 146)							_hx_tmp3 = (c->get_customStyle()->cursor != style->cursor);
            						}
            						else {
HXLINE( 146)							_hx_tmp3 = false;
            						}
HXDLIN( 146)						if (_hx_tmp3) {
HXLINE( 147)							c->get_customStyle()->cursor = style->cursor;
HXLINE( 148)							invalidate = true;
            						}
HXLINE( 146)						bool _hx_tmp4;
HXDLIN( 146)						if (::hx::IsNull( c->get_customStyle()->textAlign )) {
HXLINE( 146)							_hx_tmp4 = (c->get_customStyle()->textAlign != style->textAlign);
            						}
            						else {
HXLINE( 146)							_hx_tmp4 = false;
            						}
HXDLIN( 146)						if (_hx_tmp4) {
HXLINE( 147)							c->get_customStyle()->textAlign = style->textAlign;
HXLINE( 148)							invalidate = true;
            						}
            					}
HXLINE( 158)					if ((invalidate == true)) {
HXLINE( 159)						c->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 159)						{
            						}
            					}
            				}
            			}
            		}
            	}



::hx::ObjectPtr< ListViewBuilder_obj > ListViewBuilder_obj::__new( ::haxe::ui::containers::ListView listview) {
	::hx::ObjectPtr< ListViewBuilder_obj > __this = new ListViewBuilder_obj();
	__this->__construct(listview);
	return __this;
}

::hx::ObjectPtr< ListViewBuilder_obj > ListViewBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ListView listview) {
	ListViewBuilder_obj *__this = (ListViewBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListViewBuilder_obj), true, "haxe.ui.containers._ListView.ListViewBuilder"));
	*(void **)__this = ListViewBuilder_obj::_hx_vtable;
	__this->__construct(listview);
	return __this;
}

ListViewBuilder_obj::ListViewBuilder_obj()
{
}

void ListViewBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListViewBuilder);
	HX_MARK_MEMBER_NAME(_listview,"_listview");
	 ::haxe::ui::containers::ScrollViewBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListViewBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_listview,"_listview");
	 ::haxe::ui::containers::ScrollViewBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ListViewBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_listview") ) { return ::hx::Val( _listview ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ensureVisible") ) { return ::hx::Val( ensureVisible_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onVirtualChanged") ) { return ::hx::Val( onVirtualChanged_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addItemRendererClass") ) { return ::hx::Val( addItemRendererClass_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createContentContainer") ) { return ::hx::Val( createContentContainer_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ensureVirtualItemVisible") ) { return ::hx::Val( ensureVirtualItemVisible_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ListViewBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_listview") ) { _listview=inValue.Cast<  ::haxe::ui::containers::ListView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListViewBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_listview",22,cd,00,8b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ListViewBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ListView */ ,(int)offsetof(ListViewBuilder_obj,_listview),HX_("_listview",22,cd,00,8b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ListViewBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String ListViewBuilder_obj_sMemberFields[] = {
	HX_("_listview",22,cd,00,8b),
	HX_("create",fc,66,0f,7c),
	HX_("createContentContainer",e4,d3,42,a7),
	HX_("addComponent",5c,12,a8,0e),
	HX_("onVirtualChanged",a8,ef,1c,9b),
	HX_("addItemRendererClass",81,23,6d,87),
	HX_("ensureVisible",54,fe,02,7c),
	HX_("ensureVirtualItemVisible",b2,c4,9e,25),
	HX_("applyStyle",e3,20,6f,2f),
	::String(null()) };

::hx::Class ListViewBuilder_obj::__mClass;

void ListViewBuilder_obj::__register()
{
	ListViewBuilder_obj _hx_dummy;
	ListViewBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ListView.ListViewBuilder",02,45,2f,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ListViewBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ListViewBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListViewBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListViewBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ListView
