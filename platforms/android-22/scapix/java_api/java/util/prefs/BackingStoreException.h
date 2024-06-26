// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::prefs { class BackingStoreException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::prefs::BackingStoreException>
{
	static constexpr fixed_string class_name = "java/util/prefs/BackingStoreException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::prefs::BackingStoreException : public jni::object_base<"java/util/prefs/BackingStoreException",
	java::lang::Exception>
{
public:

	static jni::ref<java::util::prefs::BackingStoreException> new_object(jni::ref<java::lang::String> s) { return base_::new_object(s); }
	static jni::ref<java::util::prefs::BackingStoreException> new_object(jni::ref<java::lang::Throwable> t) { return base_::new_object(t); }

protected:

	BackingStoreException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION
