// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicTransferable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_TEXTTRANSFERHANDLER_TEXTTRANSFERABLE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_TEXTTRANSFERHANDLER_TEXTTRANSFERABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicTextUI_TextTransferHandler_TextTransferable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicTextUI_TextTransferHandler_TextTransferable>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicTextUI$TextTransferHandler$TextTransferable";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicTransferable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_TEXTTRANSFERHANDLER_TEXTTRANSFERABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_TEXTTRANSFERHANDLER_TEXTTRANSFERABLE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_TEXTTRANSFERHANDLER_TEXTTRANSFERABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicTextUI_TextTransferHandler_TextTransferable : public jni::object_base<"javax/swing/plaf/basic/BasicTextUI$TextTransferHandler$TextTransferable",
	javax::swing::plaf::basic::BasicTransferable>
{
public:


protected:

	BasicTextUI_TextTransferHandler_TextTransferable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_TEXTTRANSFERHANDLER_TEXTTRANSFERABLE
