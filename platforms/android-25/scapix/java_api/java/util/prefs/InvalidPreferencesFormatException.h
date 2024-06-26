// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_PREFS_INVALIDPREFERENCESFORMATEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_INVALIDPREFERENCESFORMATEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::prefs { class InvalidPreferencesFormatException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::prefs::InvalidPreferencesFormatException>
{
	static constexpr fixed_string class_name = "java/util/prefs/InvalidPreferencesFormatException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_INVALIDPREFERENCESFORMATEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_PREFS_INVALIDPREFERENCESFORMATEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_INVALIDPREFERENCESFORMATEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::prefs::InvalidPreferencesFormatException : public jni::object_base<"java/util/prefs/InvalidPreferencesFormatException",
	java::lang::Exception>
{
public:

	static jni::ref<java::util::prefs::InvalidPreferencesFormatException> new_object(jni::ref<java::lang::Throwable> cause) { return base_::new_object(cause); }
	static jni::ref<java::util::prefs::InvalidPreferencesFormatException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	static jni::ref<java::util::prefs::InvalidPreferencesFormatException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }

protected:

	InvalidPreferencesFormatException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_INVALIDPREFERENCESFORMATEXCEPTION
