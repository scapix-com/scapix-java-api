// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_PUBLICMETHODS_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_PUBLICMETHODS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class PublicMethods; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::PublicMethods>
{
	static constexpr fixed_string class_name = "java/lang/PublicMethods";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PUBLICMETHODS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_PUBLICMETHODS)
#define SCAPIX_JAVA_API_JAVA_LANG_PUBLICMETHODS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::PublicMethods : public jni::object_base<"java/lang/PublicMethods",
	java::lang::Object>
{
public:


protected:

	PublicMethods(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PUBLICMETHODS