// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTFORMATTER_REPLACEHOLDER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTFORMATTER_REPLACEHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class DefaultFormatter_ReplaceHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::DefaultFormatter_ReplaceHolder>
{
	static constexpr fixed_string class_name = "javax/swing/text/DefaultFormatter$ReplaceHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTFORMATTER_REPLACEHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTFORMATTER_REPLACEHOLDER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTFORMATTER_REPLACEHOLDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::DefaultFormatter_ReplaceHolder : public jni::object_base<"javax/swing/text/DefaultFormatter$ReplaceHolder",
	java::lang::Object>
{
public:


protected:

	DefaultFormatter_ReplaceHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTFORMATTER_REPLACEHOLDER
