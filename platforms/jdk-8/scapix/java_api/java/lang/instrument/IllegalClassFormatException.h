// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INSTRUMENT_ILLEGALCLASSFORMATEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INSTRUMENT_ILLEGALCLASSFORMATEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::instrument { class IllegalClassFormatException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::instrument::IllegalClassFormatException>
{
	static constexpr fixed_string class_name = "java/lang/instrument/IllegalClassFormatException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INSTRUMENT_ILLEGALCLASSFORMATEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INSTRUMENT_ILLEGALCLASSFORMATEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_INSTRUMENT_ILLEGALCLASSFORMATEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::instrument::IllegalClassFormatException : public jni::object_base<"java/lang/instrument/IllegalClassFormatException",
	java::lang::Exception>
{
public:

	static jni::ref<java::lang::instrument::IllegalClassFormatException> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::instrument::IllegalClassFormatException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	IllegalClassFormatException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INSTRUMENT_ILLEGALCLASSFORMATEXCEPTION