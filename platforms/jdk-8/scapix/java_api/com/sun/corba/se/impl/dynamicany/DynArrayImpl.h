// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/dynamicany/DynAnyCollectionImpl.h>
#include <scapix/java_api/org/omg/DynamicAny/DynArray.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNARRAYIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNARRAYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::dynamicany { class DynArrayImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::dynamicany::DynArrayImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/dynamicany/DynArrayImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::dynamicany::DynAnyCollectionImpl, scapix::java_api::org::omg::DynamicAny::DynArray>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNARRAYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNARRAYIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNARRAYIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::dynamicany::DynArrayImpl : public jni::object_base<"com/sun/corba/se/impl/dynamicany/DynArrayImpl",
	com::sun::corba::se::impl::dynamicany::DynAnyCollectionImpl,
	org::omg::DynamicAny::DynArray>
{
public:


protected:

	DynArrayImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNARRAYIMPL
