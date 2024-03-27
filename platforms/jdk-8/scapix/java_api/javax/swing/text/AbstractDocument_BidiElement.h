// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/AbstractDocument_LeafElement.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_ABSTRACTDOCUMENT_BIDIELEMENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_ABSTRACTDOCUMENT_BIDIELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class AbstractDocument_BidiElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::AbstractDocument_BidiElement>
{
	static constexpr fixed_string class_name = "javax/swing/text/AbstractDocument$BidiElement";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::AbstractDocument_LeafElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_ABSTRACTDOCUMENT_BIDIELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_ABSTRACTDOCUMENT_BIDIELEMENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_ABSTRACTDOCUMENT_BIDIELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::AbstractDocument_BidiElement : public jni::object_base<"javax/swing/text/AbstractDocument$BidiElement",
	javax::swing::text::AbstractDocument_LeafElement>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	AbstractDocument_BidiElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_ABSTRACTDOCUMENT_BIDIELEMENT