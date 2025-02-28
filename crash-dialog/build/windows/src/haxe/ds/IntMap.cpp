#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8a33a2a31f3d5ff5_58_new,"haxe.ds.IntMap","new",0x7222c4b6,"haxe.ds.IntMap.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/IntMap.hx",58,0x604d6034)
HX_LOCAL_STACK_FRAME(_hx_pos_8a33a2a31f3d5ff5_61_set,"haxe.ds.IntMap","set",0x72268ff8,"haxe.ds.IntMap.set","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/IntMap.hx",61,0x604d6034)
HX_LOCAL_STACK_FRAME(_hx_pos_8a33a2a31f3d5ff5_65_get,"haxe.ds.IntMap","get",0x721d74ec,"haxe.ds.IntMap.get","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/IntMap.hx",65,0x604d6034)
HX_LOCAL_STACK_FRAME(_hx_pos_8a33a2a31f3d5ff5_69_exists,"haxe.ds.IntMap","exists",0x63ba0346,"haxe.ds.IntMap.exists","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/IntMap.hx",69,0x604d6034)
HX_LOCAL_STACK_FRAME(_hx_pos_8a33a2a31f3d5ff5_73_remove,"haxe.ds.IntMap","remove",0xa86281ae,"haxe.ds.IntMap.remove","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/IntMap.hx",73,0x604d6034)
HX_LOCAL_STACK_FRAME(_hx_pos_8a33a2a31f3d5ff5_76_keys,"haxe.ds.IntMap","keys",0x6a4db8de,"haxe.ds.IntMap.keys","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/IntMap.hx",76,0x604d6034)
namespace haxe{
namespace ds{

void IntMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8a33a2a31f3d5ff5_58_new)
            	}

Dynamic IntMap_obj::__CreateEmpty() { return new IntMap_obj; }

void *IntMap_obj::_hx_vtable = 0;

Dynamic IntMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IntMap_obj > _hx_result = new IntMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IntMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x269a1502;
}

static ::haxe::IMap_obj _hx_haxe_ds_IntMap__hx_haxe_IMap= {
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::haxe::ds::IntMap_obj::get_a7a2487a,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::haxe::ds::IntMap_obj::set_dca24b06,
};

void IntMap_obj::set_dca24b06( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}

 ::Dynamic IntMap_obj::get_a7a2487a( ::Dynamic k) {
			return get(k);
}
void *IntMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_haxe_ds_IntMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void IntMap_obj::set(int key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_8a33a2a31f3d5ff5_61_set)
HXDLIN(  61)		 ::__int_hash_set(HX_MAP_THIS,key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntMap_obj,set,(void))

 ::Dynamic IntMap_obj::get(int key){
            	HX_STACKFRAME(&_hx_pos_8a33a2a31f3d5ff5_65_get)
HXDLIN(  65)		return  ::__int_hash_get(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntMap_obj,get,return )

bool IntMap_obj::exists(int key){
            	HX_STACKFRAME(&_hx_pos_8a33a2a31f3d5ff5_69_exists)
HXDLIN(  69)		return  ::__int_hash_exists(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntMap_obj,exists,return )

bool IntMap_obj::remove(int key){
            	HX_STACKFRAME(&_hx_pos_8a33a2a31f3d5ff5_73_remove)
HXDLIN(  73)		return  ::__int_hash_remove(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntMap_obj,remove,return )

 ::Dynamic IntMap_obj::keys(){
            	HX_GC_STACKFRAME(&_hx_pos_8a33a2a31f3d5ff5_76_keys)
HXLINE(  77)		::Array< int > a =  ::__int_hash_keys(this->h);
HXLINE(  78)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,a);
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntMap_obj,keys,return )


::hx::ObjectPtr< IntMap_obj > IntMap_obj::__new() {
	::hx::ObjectPtr< IntMap_obj > __this = new IntMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< IntMap_obj > IntMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	IntMap_obj *__this = (IntMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IntMap_obj), true, "haxe.ds.IntMap"));
	*(void **)__this = IntMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

IntMap_obj::IntMap_obj()
{
}

void IntMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntMap);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_END_CLASS();
}

void IntMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
}

::hx::Val IntMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return ::hx::Val( h ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IntMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("h",68,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IntMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(IntMap_obj,h),HX_("h",68,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IntMap_obj_sStaticStorageInfo = 0;
#endif

static ::String IntMap_obj_sMemberFields[] = {
	HX_("h",68,00,00,00),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("exists",dc,1d,e0,bf),
	HX_("remove",44,9c,88,04),
	HX_("keys",f4,e1,06,47),
	::String(null()) };

::hx::Class IntMap_obj::__mClass;

void IntMap_obj::__register()
{
	IntMap_obj _hx_dummy;
	IntMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.IntMap",c4,f1,10,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IntMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IntMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IntMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IntMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
