// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYUTIL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYUTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::dynamicany { class DynAnyUtil; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::dynamicany::DynAnyUtil>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/dynamicany/DynAnyUtil";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYUTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYUTIL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYUTIL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::dynamicany::DynAnyUtil : public jni::object_base<"com/sun/corba/se/impl/dynamicany/DynAnyUtil",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::impl::dynamicany::DynAnyUtil> new_object() { return base_::new_object(); }

protected:

	DynAnyUtil(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYUTIL