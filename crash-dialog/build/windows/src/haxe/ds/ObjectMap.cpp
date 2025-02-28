#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37f1448d22653c94_58_new,"haxe.ds.ObjectMap","new",0x27af5498,"haxe.ds.ObjectMap.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",58,0xd94cd95e)
HX_LOCAL_STACK_FRAME(_hx_pos_37f1448d22653c94_61_set,"haxe.ds.ObjectMap","set",0x27b31fda,"haxe.ds.ObjectMap.set","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",61,0xd94cd95e)
HX_LOCAL_STACK_FRAME(_hx_pos_37f1448d22653c94_65_get,"haxe.ds.ObjectMap","get",0x27aa04ce,"haxe.ds.ObjectMap.get","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",65,0xd94cd95e)
HX_LOCAL_STACK_FRAME(_hx_pos_37f1448d22653c94_69_exists,"haxe.ds.ObjectMap","exists",0xc8930ca4,"haxe.ds.ObjectMap.exists","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",69,0xd94cd95e)
HX_LOCAL_STACK_FRAME(_hx_pos_37f1448d22653c94_73_remove,"haxe.ds.ObjectMap","remove",0x0d3b8b0c,"haxe.ds.ObjectMap.remove","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",73,0xd94cd95e)
HX_LOCAL_STACK_FRAME(_hx_pos_37f1448d22653c94_76_keys,"haxe.ds.ObjectMap","keys",0x8fbf0ebc,"haxe.ds.ObjectMap.keys","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",76,0xd94cd95e)
HX_LOCAL_STACK_FRAME(_hx_pos_37f1448d22653c94_81_iterator,"haxe.ds.ObjectMap","iterator",0x61fc7ab6,"haxe.ds.ObjectMap.iterator","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",81,0xd94cd95e)
namespace haxe{
namespace ds{

void ObjectMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_37f1448d22653c94_58_new)
            	}

Dynamic ObjectMap_obj::__CreateEmpty() { return new ObjectMap_obj; }

void *ObjectMap_obj::_hx_vtable = 0;

Dynamic ObjectMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ObjectMap_obj > _hx_result = new ObjectMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ObjectMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6cba6d44;
}

static ::haxe::IMap_obj _hx_haxe_ds_ObjectMap__hx_haxe_IMap= {
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::haxe::ds::ObjectMap_obj::get,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::haxe::ds::ObjectMap_obj::set_dca24b06,
};

void ObjectMap_obj::set_dca24b06( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *ObjectMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_haxe_ds_ObjectMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void ObjectMap_obj::set( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_37f1448d22653c94_61_set)
HXDLIN(  61)		 ::__object_hash_set(HX_MAP_THIS,key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectMap_obj,set,(void))

 ::Dynamic ObjectMap_obj::get( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_37f1448d22653c94_65_get)
HXDLIN(  65)		return  ::__object_hash_get(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMap_obj,get,return )

bool ObjectMap_obj::exists( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_37f1448d22653c94_69_exists)
HXDLIN(  69)		return  ::__object_hash_exists(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMap_obj,exists,return )

bool ObjectMap_obj::remove( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_37f1448d22653c94_73_remove)
HXDLIN(  73)		return  ::__object_hash_remove(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMap_obj,remove,return )

 ::Dynamic ObjectMap_obj::keys(){
            	HX_GC_STACKFRAME(&_hx_pos_37f1448d22653c94_76_keys)
HXLINE(  77)		::cpp::VirtualArray a =  ::__object_hash_keys(this->h);
HXLINE(  78)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,a);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMap_obj,keys,return )

 ::Dynamic ObjectMap_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_37f1448d22653c94_81_iterator)
HXLINE(  82)		::cpp::VirtualArray a =  ::__object_hash_values(this->h);
HXLINE(  83)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,a);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMap_obj,iterator,return )


::hx::ObjectPtr< ObjectMap_obj > ObjectMap_obj::__new() {
	::hx::ObjectPtr< ObjectMap_obj > __this = new ObjectMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ObjectMap_obj > ObjectMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ObjectMap_obj *__this = (ObjectMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ObjectMap_obj), true, "haxe.ds.ObjectMap"));
	*(void **)__this = ObjectMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ObjectMap_obj::ObjectMap_obj()
{
}

void ObjectMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectMap);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_END_CLASS();
}

void ObjectMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
}

::hx::Val ObjectMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ObjectMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("h",68,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ObjectMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ObjectMap_obj,h),HX_("h",68,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ObjectMap_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectMap_obj_sMemberFields[] = {
	HX_("h",68,00,00,00),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("exists",dc,1d,e0,bf),
	HX_("remove",44,9c,88,04),
	HX_("keys",f4,e1,06,47),
	HX_("iterator",ee,49,9a,93),
	::String(null()) };

::hx::Class ObjectMap_obj::__mClass;

void ObjectMap_obj::__register()
{
	ObjectMap_obj _hx_dummy;
	ObjectMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.ObjectMap",a6,68,9b,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ObjectMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ObjectMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
