// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::foreign::snippets { class Snippets; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::foreign::snippets::Snippets>
{
	static constexpr fixed_string class_name = "java/lang/foreign/snippets/Snippets";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS)
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::foreign::snippets::Snippets : public jni::object_base<"java/lang/foreign/snippets/Snippets",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::foreign::snippets::Snippets> new_object() { return base_::new_object(); }

protected:

	Snippets(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_SNIPPETS_SNIPPETS
