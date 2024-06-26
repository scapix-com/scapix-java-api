// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_OBJECTUTILITY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_OBJECTUTILITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orbutil { class ObjectUtility; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orbutil::ObjectUtility>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orbutil/ObjectUtility";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_OBJECTUTILITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_OBJECTUTILITY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_OBJECTUTILITY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::orbutil::ObjectUtility : public jni::object_base<"com/sun/corba/se/impl/orbutil/ObjectUtility",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::Object> concatenateArrays(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_static_method<"concatenateArrays", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	ObjectUtility(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_OBJECTUTILITY
