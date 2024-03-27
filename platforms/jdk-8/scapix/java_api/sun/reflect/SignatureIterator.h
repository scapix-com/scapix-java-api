// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_SIGNATUREITERATOR_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_SIGNATUREITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect { class SignatureIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::SignatureIterator>
{
	static constexpr fixed_string class_name = "sun/reflect/SignatureIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_SIGNATUREITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_SIGNATUREITERATOR)
#define SCAPIX_JAVA_API_SUN_REFLECT_SIGNATUREITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::SignatureIterator : public jni::object_base<"sun/reflect/SignatureIterator",
	java::lang::Object>
{
public:

	static jni::ref<sun::reflect::SignatureIterator> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	void reset() { return call_method<"reset", void>(); }
	jboolean atEnd() { return call_method<"atEnd", jboolean>(); }
	jni::ref<java::lang::String> next() { return call_method<"next", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> returnType() { return call_method<"returnType", jni::ref<java::lang::String>>(); }

protected:

	SignatureIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_SIGNATUREITERATOR