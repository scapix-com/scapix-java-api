// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_RBTABLEBUILDER_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_RBTABLEBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class RBTableBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::RBTableBuilder>
{
	static constexpr fixed_string class_name = "java/text/RBTableBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_RBTABLEBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_RBTABLEBUILDER)
#define SCAPIX_JAVA_API_JAVA_TEXT_RBTABLEBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/RBCollationTables_BuildAPI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::text::RBTableBuilder : public jni::object_base<"java/text/RBTableBuilder",
	java::lang::Object>
{
public:

	static jni::ref<java::text::RBTableBuilder> new_object(jni::ref<java::text::RBCollationTables_BuildAPI> tables) { return base_::new_object(tables); }
	void build(jni::ref<java::lang::String> pattern, jint decmp) { return call_method<"build", void>(pattern, decmp); }

protected:

	RBTableBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_RBTABLEBUILDER
