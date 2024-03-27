// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_MATCH_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_MATCH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath::regex { class Match; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath::regex::Match>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xpath/regex/Match";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_MATCH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_MATCH)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_MATCH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xpath::regex::Match : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xpath/regex/Match",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xpath::regex::Match> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint getNumberOfGroups() { return call_method<"getNumberOfGroups", jint>(); }
	jint getBeginning(jint p1) { return call_method<"getBeginning", jint>(p1); }
	jint getEnd(jint p1) { return call_method<"getEnd", jint>(p1); }
	jni::ref<java::lang::String> getCapturedText(jint p1) { return call_method<"getCapturedText", jni::ref<java::lang::String>>(p1); }

protected:

	Match(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_REGEX_MATCH
