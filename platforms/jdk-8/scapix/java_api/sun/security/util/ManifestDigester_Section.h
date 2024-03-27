// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTDIGESTER_SECTION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTDIGESTER_SECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class ManifestDigester_Section; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::ManifestDigester_Section>
{
	static constexpr fixed_string class_name = "sun/security/util/ManifestDigester$Section";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTDIGESTER_SECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTDIGESTER_SECTION)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTDIGESTER_SECTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::util::ManifestDigester_Section : public jni::object_base<"sun/security/util/ManifestDigester$Section",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::util::ManifestDigester_Section> new_object(jint p1, jint p2, jint p3, jni::ref<jni::array<jbyte>> p4) { return base_::new_object(p1, p2, p3, p4); }

protected:

	ManifestDigester_Section(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MANIFESTDIGESTER_SECTION
