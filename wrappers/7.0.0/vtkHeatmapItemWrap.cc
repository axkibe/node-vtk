/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkContextItemWrap.h"
#include "vtkHeatmapItemWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTableWrap.h"
#include "vtkStringArrayWrap.h"
#include "vtkContext2DWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHeatmapItemWrap::ptpl;

VtkHeatmapItemWrap::VtkHeatmapItemWrap()
{ }

VtkHeatmapItemWrap::VtkHeatmapItemWrap(vtkSmartPointer<vtkHeatmapItem> _native)
{ native = _native; }

VtkHeatmapItemWrap::~VtkHeatmapItemWrap()
{ }

void VtkHeatmapItemWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHeatmapItem").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HeatmapItem").ToLocalChecked(), ConstructorGetter);
}

void VtkHeatmapItemWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHeatmapItemWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHeatmapItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetCellHeight", GetCellHeight);
	Nan::SetPrototypeMethod(tpl, "getCellHeight", GetCellHeight);

	Nan::SetPrototypeMethod(tpl, "GetCellWidth", GetCellWidth);
	Nan::SetPrototypeMethod(tpl, "getCellWidth", GetCellWidth);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColumnLabelWidth", GetColumnLabelWidth);
	Nan::SetPrototypeMethod(tpl, "getColumnLabelWidth", GetColumnLabelWidth);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetPosition", GetPosition);
	Nan::SetPrototypeMethod(tpl, "getPosition", GetPosition);

	Nan::SetPrototypeMethod(tpl, "GetRowLabelWidth", GetRowLabelWidth);
	Nan::SetPrototypeMethod(tpl, "getRowLabelWidth", GetRowLabelWidth);

	Nan::SetPrototypeMethod(tpl, "GetRowNames", GetRowNames);
	Nan::SetPrototypeMethod(tpl, "getRowNames", GetRowNames);

	Nan::SetPrototypeMethod(tpl, "GetTable", GetTable);
	Nan::SetPrototypeMethod(tpl, "getTable", GetTable);

	Nan::SetPrototypeMethod(tpl, "GetTextAngleForOrientation", GetTextAngleForOrientation);
	Nan::SetPrototypeMethod(tpl, "getTextAngleForOrientation", GetTextAngleForOrientation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellHeight", SetCellHeight);
	Nan::SetPrototypeMethod(tpl, "setCellHeight", SetCellHeight);

	Nan::SetPrototypeMethod(tpl, "SetCellWidth", SetCellWidth);
	Nan::SetPrototypeMethod(tpl, "setCellWidth", SetCellWidth);

	Nan::SetPrototypeMethod(tpl, "SetOrientation", SetOrientation);
	Nan::SetPrototypeMethod(tpl, "setOrientation", SetOrientation);

	Nan::SetPrototypeMethod(tpl, "SetPosition", SetPosition);
	Nan::SetPrototypeMethod(tpl, "setPosition", SetPosition);

	Nan::SetPrototypeMethod(tpl, "SetTable", SetTable);
	Nan::SetPrototypeMethod(tpl, "setTable", SetTable);

#ifdef VTK_NODE_PLUS_VTKHEATMAPITEMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHEATMAPITEMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHeatmapItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHeatmapItem> native = vtkSmartPointer<vtkHeatmapItem>::New();
		VtkHeatmapItemWrap* obj = new VtkHeatmapItemWrap(native);
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

void VtkHeatmapItemWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHeatmapItemWrap::GetCellHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHeatmapItemWrap::GetCellWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHeatmapItemWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHeatmapItemWrap::GetColumnLabelWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColumnLabelWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHeatmapItemWrap::GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHeatmapItemWrap::GetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	float const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPosition();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(float));
	Local<v8::Float32Array> at = v8::Float32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(float));
	info.GetReturnValue().Set(at);
}

void VtkHeatmapItemWrap::GetRowLabelWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRowLabelWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHeatmapItemWrap::GetRowNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRowNames();
	VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHeatmapItemWrap::GetTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	vtkTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTable();
	VtkTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTableWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableWrap *w = new VtkTableWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHeatmapItemWrap::GetTextAngleForOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetTextAngleForOrientation(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHeatmapItemWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
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

void VtkHeatmapItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	vtkHeatmapItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHeatmapItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHeatmapItemWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHeatmapItemWrap *w = new VtkHeatmapItemWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHeatmapItemWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContext2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkContext2DWrap *a0 = ObjectWrap::Unwrap<VtkContext2DWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Paint(
			(vtkContext2D *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHeatmapItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHeatmapItem * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkHeatmapItemWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHeatmapItemWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHeatmapItemWrap *w = new VtkHeatmapItemWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHeatmapItemWrap::SetCellHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellHeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHeatmapItemWrap::SetCellWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHeatmapItemWrap::SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHeatmapItemWrap::SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat32Array())
	{
		v8::Local<v8::Float32Array>a0(v8::Local<v8::Float32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPosition(
			(float *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		float b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPosition(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPosition(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHeatmapItemWrap::SetTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTableWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTableWrap *a0 = ObjectWrap::Unwrap<VtkTableWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTable(
			(vtkTable *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

