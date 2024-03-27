// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/naming/CompoundName.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CNNAMEPARSER_CNCOMPOUNDNAME_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CNNAMEPARSER_CNCOMPOUNDNAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::cosnaming { class CNNameParser_CNCompoundName; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::cosnaming::CNNameParser_CNCompoundName>
{
	static constexpr fixed_string class_name = "com/sun/jndi/cosnaming/CNNameParser$CNCompoundName";
	using base_classes = std::tuple<scapix::java_api::javax::naming::CompoundName>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CNNAMEPARSER_CNCOMPOUNDNAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CNNAMEPARSER_CNCOMPOUNDNAME)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CNNAMEPARSER_CNCOMPOUNDNAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/naming/Name.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::cosnaming::CNNameParser_CNCompoundName : public jni::object_base<"com/sun/jndi/cosnaming/CNNameParser$CNCompoundName",
	javax::naming::CompoundName>
{
public:

	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<javax::naming::Name> getPrefix(jint p1) { return call_method<"getPrefix", jni::ref<javax::naming::Name>>(p1); }
	jni::ref<javax::naming::Name> getSuffix(jint p1) { return call_method<"getSuffix", jni::ref<javax::naming::Name>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CNNameParser_CNCompoundName(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CNNAMEPARSER_CNCOMPOUNDNAME