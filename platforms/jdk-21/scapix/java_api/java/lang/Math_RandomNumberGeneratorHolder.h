// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MATH_RANDOMNUMBERGENERATORHOLDER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MATH_RANDOMNUMBERGENERATORHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Math_RandomNumberGeneratorHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Math_RandomNumberGeneratorHolder>
{
	static constexpr fixed_string class_name = "java/lang/Math$RandomNumberGeneratorHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MATH_RANDOMNUMBERGENERATORHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MATH_RANDOMNUMBERGENERATORHOLDER)
#define SCAPIX_JAVA_API_JAVA_LANG_MATH_RANDOMNUMBERGENERATORHOLDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::Math_RandomNumberGeneratorHolder : public jni::object_base<"java/lang/Math$RandomNumberGeneratorHolder",
	java::lang::Object>
{
public:


protected:

	Math_RandomNumberGeneratorHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MATH_RANDOMNUMBERGENERATORHOLDER
