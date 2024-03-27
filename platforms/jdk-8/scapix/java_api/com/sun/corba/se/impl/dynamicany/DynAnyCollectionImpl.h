// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/dynamicany/DynAnyConstructedImpl.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYCOLLECTIONIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYCOLLECTIONIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::dynamicany { class DynAnyCollectionImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::dynamicany::DynAnyCollectionImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/dynamicany/DynAnyCollectionImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::dynamicany::DynAnyConstructedImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYCOLLECTIONIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYCOLLECTIONIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYCOLLECTIONIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/Any.h>
#include <scapix/java_api/org/omg/DynamicAny/DynAny.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::dynamicany::DynAnyCollectionImpl : public jni::object_base<"com/sun/corba/se/impl/dynamicany/DynAnyCollectionImpl",
	com::sun::corba::se::impl::dynamicany::DynAnyConstructedImpl>
{
public:

	jni::ref<jni::array<org::omg::CORBA::Any>> get_elements() { return call_method<"get_elements", jni::ref<jni::array<org::omg::CORBA::Any>>>(); }
	void set_elements(jni::ref<jni::array<org::omg::CORBA::Any>> p1) { return call_method<"set_elements", void>(p1); }
	jni::ref<jni::array<org::omg::DynamicAny::DynAny>> get_elements_as_dyn_any() { return call_method<"get_elements_as_dyn_any", jni::ref<jni::array<org::omg::DynamicAny::DynAny>>>(); }
	void set_elements_as_dyn_any(jni::ref<jni::array<org::omg::DynamicAny::DynAny>> p1) { return call_method<"set_elements_as_dyn_any", void>(p1); }

protected:

	DynAnyCollectionImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYCOLLECTIONIMPL
