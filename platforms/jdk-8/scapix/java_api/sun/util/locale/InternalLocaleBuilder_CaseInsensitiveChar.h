// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_INTERNALLOCALEBUILDER_CASEINSENSITIVECHAR_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_INTERNALLOCALEBUILDER_CASEINSENSITIVECHAR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale { class InternalLocaleBuilder_CaseInsensitiveChar; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::InternalLocaleBuilder_CaseInsensitiveChar>
{
	static constexpr fixed_string class_name = "sun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_INTERNALLOCALEBUILDER_CASEINSENSITIVECHAR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_INTERNALLOCALEBUILDER_CASEINSENSITIVECHAR)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_INTERNALLOCALEBUILDER_CASEINSENSITIVECHAR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::util::locale::InternalLocaleBuilder_CaseInsensitiveChar : public jni::object_base<"sun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar",
	java::lang::Object>
{
public:

	jchar value() { return call_method<"value", jchar>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	InternalLocaleBuilder_CaseInsensitiveChar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_INTERNALLOCALEBUILDER_CASEINSENSITIVECHAR
