// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/dnd/DragGestureRecognizer.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_SWINGDRAGGESTURERECOGNIZER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_SWINGDRAGGESTURERECOGNIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class TransferHandler_SwingDragGestureRecognizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::TransferHandler_SwingDragGestureRecognizer>
{
	static constexpr fixed_string class_name = "javax/swing/TransferHandler$SwingDragGestureRecognizer";
	using base_classes = std::tuple<scapix::java_api::java::awt::dnd::DragGestureRecognizer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_SWINGDRAGGESTURERECOGNIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_SWINGDRAGGESTURERECOGNIZER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_SWINGDRAGGESTURERECOGNIZER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::TransferHandler_SwingDragGestureRecognizer : public jni::object_base<"javax/swing/TransferHandler$SwingDragGestureRecognizer",
	java::awt::dnd::DragGestureRecognizer>
{
public:


protected:

	TransferHandler_SwingDragGestureRecognizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_SWINGDRAGGESTURERECOGNIZER
