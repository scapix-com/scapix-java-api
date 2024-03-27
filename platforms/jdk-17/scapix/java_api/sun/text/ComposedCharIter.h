// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_COMPOSEDCHARITER_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_COMPOSEDCHARITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text { class ComposedCharIter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::ComposedCharIter>
{
	static constexpr fixed_string class_name = "sun/text/ComposedCharIter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_COMPOSEDCHARITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_COMPOSEDCHARITER)
#define SCAPIX_JAVA_API_SUN_TEXT_COMPOSEDCHARITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::ComposedCharIter : public jni::object_base<"sun/text/ComposedCharIter",
	java::lang::Object>
{
public:

	static jint DONE() { return get_static_field<"DONE", jint>(); }

	static jni::ref<sun::text::ComposedCharIter> new_object() { return base_::new_object(); }
	jint next() { return call_method<"next", jint>(); }
	jni::ref<java::lang::String> decomposition() { return call_method<"decomposition", jni::ref<java::lang::String>>(); }

protected:

	ComposedCharIter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_COMPOSEDCHARITER