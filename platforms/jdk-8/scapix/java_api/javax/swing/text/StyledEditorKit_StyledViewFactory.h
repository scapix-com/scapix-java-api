// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/text/ViewFactory.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_STYLEDVIEWFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_STYLEDVIEWFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class StyledEditorKit_StyledViewFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::StyledEditorKit_StyledViewFactory>
{
	static constexpr fixed_string class_name = "javax/swing/text/StyledEditorKit$StyledViewFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::text::ViewFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_STYLEDVIEWFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_STYLEDVIEWFACTORY)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_STYLEDVIEWFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/Element.h>
#include <scapix/java_api/javax/swing/text/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::StyledEditorKit_StyledViewFactory : public jni::object_base<"javax/swing/text/StyledEditorKit$StyledViewFactory",
	java::lang::Object,
	javax::swing::text::ViewFactory>
{
public:

	jni::ref<javax::swing::text::View> create(jni::ref<javax::swing::text::Element> p1) { return call_method<"create", jni::ref<javax::swing::text::View>>(p1); }

protected:

	StyledEditorKit_StyledViewFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_STYLEDVIEWFACTORY
