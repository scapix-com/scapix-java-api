// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERACTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orb { class ParserAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orb::ParserAction>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orb/ParserAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERACTION)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Properties.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::orb::ParserAction : public jni::object_base<"com/sun/corba/se/impl/orb/ParserAction",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getPropertyName() { return call_method<"getPropertyName", jni::ref<java::lang::String>>(); }
	jboolean isPrefix() { return call_method<"isPrefix", jboolean>(); }
	jni::ref<java::lang::String> getFieldName() { return call_method<"getFieldName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> apply(jni::ref<java::util::Properties> p1) { return call_method<"apply", jni::ref<java::lang::Object>>(p1); }

protected:

	ParserAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERACTION
