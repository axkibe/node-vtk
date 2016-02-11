/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCameraWrap.h"
#include "vtkOpenGLCameraWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLCameraWrap::ptpl;

VtkOpenGLCameraWrap::VtkOpenGLCameraWrap()
{ }

VtkOpenGLCameraWrap::VtkOpenGLCameraWrap(vtkSmartPointer<vtkOpenGLCamera> _native)
{ native = _native; }

VtkOpenGLCameraWrap::~VtkOpenGLCameraWrap()
{ }

void VtkOpenGLCameraWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLCamera").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLCamera").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLCameraWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLCameraWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCameraWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCameraWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLCameraWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetKeyMatrices", GetKeyMatrices);
	Nan::SetPrototypeMethod(tpl, "getKeyMatrices", GetKeyMatrices);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "UpdateViewport", UpdateViewport);
	Nan::SetPrototypeMethod(tpl, "updateViewport", UpdateViewport);

	ptpl.Reset( tpl );
}

void VtkOpenGLCameraWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLCamera> native = vtkSmartPointer<vtkOpenGLCamera>::New();
		VtkOpenGLCameraWrap* obj = new VtkOpenGLCameraWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLCameraWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLCameraWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLCameraWrap>(info.Holder());
	vtkOpenGLCamera *native = (vtkOpenGLCamera *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLCameraWrap::GetKeyMatrices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLCameraWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLCameraWrap>(info.Holder());
	vtkOpenGLCamera *native = (vtkOpenGLCamera *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[1]))
		{
			VtkMatrix4x4Wrap *a1 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkMatrix3x3Wrap::ptpl))->HasInstance(info[2]))
			{
				VtkMatrix3x3Wrap *a2 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[3]))
				{
					VtkMatrix4x4Wrap *a3 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[4]))
					{
						VtkMatrix4x4Wrap *a4 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[4]->ToObject());
												if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						native->GetKeyMatrices(
							(vtkRenderer *) a0->native.GetPointer(),
							(vtkMatrix4x4 *) a1->native.GetPointer(),
							(vtkMatrix3x3 *) a2->native.GetPointer(),
							(vtkMatrix4x4 *) a3->native.GetPointer(),
							(vtkMatrix4x4 *) a4->native.GetPointer()
						);
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLCameraWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLCameraWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLCameraWrap>(info.Holder());
	vtkOpenGLCamera *native = (vtkOpenGLCamera *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLCameraWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLCameraWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLCameraWrap>(info.Holder());
	vtkOpenGLCamera *native = (vtkOpenGLCamera *)wrapper->native.GetPointer();
	vtkOpenGLCamera * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkOpenGLCameraWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOpenGLCameraWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLCameraWrap *w = new VtkOpenGLCameraWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLCameraWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLCameraWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLCameraWrap>(info.Holder());
	vtkOpenGLCamera *native = (vtkOpenGLCamera *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Render(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLCameraWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLCameraWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLCameraWrap>(info.Holder());
	vtkOpenGLCamera *native = (vtkOpenGLCamera *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLCamera * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkOpenGLCameraWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOpenGLCameraWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLCameraWrap *w = new VtkOpenGLCameraWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLCameraWrap::UpdateViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLCameraWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLCameraWrap>(info.Holder());
	vtkOpenGLCamera *native = (vtkOpenGLCamera *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->UpdateViewport(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

